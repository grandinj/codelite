//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : svnxmlparser.cpp
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
#include "svnxml.h"
#include <wx/xml/xml.h>
#include <wx/sstream.h>
#include "xmlutils.h"
#include <wx/log.h>
#include "wx_xml_compatibility.h"
#include <wx/arrstr.h>


SvnXML::SvnXML()
{
}

SvnXML::~SvnXML()
{
}

void SvnXML::GetFiles(const wxString &input,
					  wxArrayString  &modifiedFiles,
					  wxArrayString  &conflictedFiles,
					  wxArrayString  &unversionedFiles,
					  wxArrayString  &newFiles,
					  wxArrayString  &deletedFiles,
					  wxArrayString  &lockedFiles)
{
	// First column information:
	//
	// ' ' no modifications
    // 'A' Added
    // 'C' Conflicted
    // 'D' Deleted
    // 'I' Ignored
    // 'M' Modified
    // 'R' Replaced
    // 'X' an unversioned directory created by an externals definition
    // '?' item is not under version control
    // '!' item is missing (removed by non-svn command) or incomplete
    // '~' versioned item obstructed by some item of a different kind
	//
	// Sixth column information:
	//
    //  ' ' no lock token
    //  'K' lock token present
    //  (with -u)
    //  ' ' not locked in repository, no lock token
    //  'K' locked in repository, lock toKen present
    //  'O' locked in repository, lock token in some Other working copy
    //  'T' locked in repository, lock token present but sTolen
    //  'B' not locked in repository, lock token present but Broken
	//
	wxArrayString lines = wxStringTokenize(input, wxT("\n\r"), wxTOKEN_STRTOK);
	for(size_t i=0; i<lines.GetCount(); i++) {
		wxString statusLine = lines.Item(i).Trim();
		if(statusLine.Len() < 7) {
			continue;
		}
		
		wxString filename = statusLine.Mid(7);
		filename.Trim().Trim(false);

		wxChar ch1 = statusLine.GetChar(0);
		wxChar ch6 = statusLine.GetChar(5);
		switch(ch1) {
		case 'A':
			newFiles.Add(filename);
			break;
		case 'M':
			modifiedFiles.Add(filename);
			break;
		case 'D':
			deletedFiles.Add(filename);
			break;
		case '?':
			unversionedFiles.Add(filename);
			break;
		case 'C':
			conflictedFiles.Add(filename);
			break;
		default:
			break;
		}

		switch(ch6) {
		case 'K':
			lockedFiles.Add(filename);
			break;
		case 'O':
			lockedFiles.Add(filename);
			break;
		default:
			break;
		}
	}
}

void SvnXML::GetSvnInfo(const wxString& input, SvnInfo &svnInfo)
{
	wxStringInputStream stream(input);
	wxXmlDocument doc(stream);

	if (!doc.IsOk()) {
		//wxLogMessage(input);
		return;
	}

	wxXmlNode *root = doc.GetRoot();
	if (root) {
		wxXmlNode *node = root->GetChildren();
		while ( node ) {
			if (node->GetName() == wxT("entry")) {
				node->GetPropVal(wxT("revision"), &svnInfo.m_revision);

				// Look for the URL
				wxXmlNode *child = node->GetChildren();
				while( child ) {
					if(child->GetName() == wxT("url")) {
						svnInfo.m_sourceUrl = child->GetNodeContent();
					}

					// Last commit info
					if( child->GetName() == wxT("commit") ) {
						wxXmlNode *gchild = child->GetChildren();
						while( gchild ) {
							if(gchild->GetName() == wxT("author")) {
								svnInfo.m_author = gchild->GetNodeContent();
							}

							if(gchild->GetName() == wxT("date")) {
								svnInfo.m_date = gchild->GetNodeContent();
							}
							gchild = gchild->GetNext();
						}
					}

					if( child->GetName() == wxT("repository") ) {
						wxXmlNode *gchild = child->GetChildren();
						while( gchild ) {
							if(gchild->GetName() == wxT("root")) {
								svnInfo.m_url = gchild->GetNodeContent();
								break;
							}
							gchild = gchild->GetNext();
						}
					}
					child = child->GetNext();
				}
			}
			node = node->GetNext();
		}
	}
	return;
}
