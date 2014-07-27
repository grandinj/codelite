//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: SyntaxHighlightBaseDlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "syntaxhighlightbasedlg.h"


// Declare the bitmap loading function
extern void wxCrafterqEa5vvInitBitmapResources();

static bool bBitmapLoaded = false;


SyntaxHighlightBaseDlg::SyntaxHighlightBaseDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterqEa5vvInitBitmapResources();
        bBitmapLoaded = true;
    }
    // Set icon(s) to the application/dialog
    wxIconBundle app_icons;
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("fonts-and-colours"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    SetIcons( app_icons );

    
    wxBoxSizer* bSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(bSizer1);
    
    m_auibar = new wxAuiToolBar(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxAUI_TB_PLAIN_BACKGROUND|wxAUI_TB_DEFAULT_STYLE);
    m_auibar->SetToolBitmapSize(wxSize(16,16));
    
    bSizer1->Add(m_auibar, 0, wxEXPAND, 5);
    
    m_auibar->AddTool(wxID_NEW, _("New Theme..."), wxArtProvider::GetBitmap(wxART_NEW, wxART_TOOLBAR, wxSize(16, 16)), wxNullBitmap, wxITEM_NORMAL, _("New Theme..."), _("New Theme..."), NULL);
    
    m_auibar->AddTool(wxID_SAVE, _("Export"), wxArtProvider::GetBitmap(wxART_FILE_SAVE, wxART_TOOLBAR, wxSize(16, 16)), wxNullBitmap, wxITEM_NORMAL, _("Export syntax highlight settings to zip file"), _("Export syntax highlight settings to zip file"), NULL);
    wxAuiToolBarItem* m_toolbarItemSave = m_auibar->FindToolByIndex(m_auibar->GetToolCount()-1);
    if (m_toolbarItemSave) {
        m_toolbarItemSave->SetHasDropDown(true);
        m_menu142 = new wxMenu;
        m_menuItemExportAll = new wxMenuItem(m_menu142, ID_EXPORT_ALL, _("Export All"), _("Export All"), wxITEM_NORMAL);
        m_menu142->Append(m_menuItemExportAll);
        m_menuItemExportSelective = new wxMenuItem(m_menu142, ID_EXPORT_SELECTIVE, _("Export..."), _("Export specific lexers"), wxITEM_NORMAL);
        m_menu142->Append(m_menuItemExportSelective);
        
        m_dropdownMenus.insert(std::make_pair( m_toolbarItemSave->GetId(), m_menu142) );
    }
    
    m_auibar->AddTool(wxID_OPEN, _("Import settings from a zip archive"), wxArtProvider::GetBitmap(wxART_FILE_OPEN, wxART_TOOLBAR, wxSize(16, 16)), wxNullBitmap, wxITEM_NORMAL, _("Import settings from a zip archive"), _("Import settings from a zip archive"), NULL);
    
    m_auibar->AddTool(wxID_REVERT, _("Revert to default settings"), wxXmlResource::Get()->LoadBitmap(wxT("document-revert")), wxNullBitmap, wxITEM_NORMAL, _("Revert to default settings"), _("Revert to default settings"), NULL);
    
    m_auibar->AddTool(ID_TOOL_IMPORT_ECLIPSE_THEME, _("Import Eclipse Theme"), wxXmlResource::Get()->LoadBitmap(wxT("eclipse")), wxNullBitmap, wxITEM_NORMAL, _("Import Eclipse Theme"), _("Import Eclipse Theme"), NULL);
    wxAuiToolBarItem* m_toolbarItem150 = m_auibar->FindToolByIndex(m_auibar->GetToolCount()-1);
    if (m_toolbarItem150) {
        m_toolbarItem150->SetHasDropDown(true);
        m_menu151 = new wxMenu;
        m_menuItem153 = new wxMenuItem(m_menu151, ID_MENU_ECLIPSE_WEBSITE, _("Load eclipse theme website"), _("Load eclipse theme website"), wxITEM_NORMAL);
        m_menu151->Append(m_menuItem153);
        
        m_dropdownMenus.insert(std::make_pair( m_toolbarItem150->GetId(), m_menu151) );
    }
    m_auibar->Realize();
    
    m_notebook76 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    
    bSizer1->Add(m_notebook76, 1, wxALL|wxEXPAND, 5);
    
    m_panelSyntaxHighlight = new wxPanel(m_notebook76, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook76->AddPage(m_panelSyntaxHighlight, _("Syntax Highlight"), false);
    
    wxBoxSizer* boxSizer21 = new wxBoxSizer(wxHORIZONTAL);
    m_panelSyntaxHighlight->SetSizer(boxSizer21);
    
    wxArrayString m_listBoxArr;
    m_listBox = new wxListBox(m_panelSyntaxHighlight, wxID_ANY, wxDefaultPosition, wxSize(150,-1), m_listBoxArr, wxLB_SORT|wxLB_SINGLE);
    
    boxSizer21->Add(m_listBox, 0, wxALL|wxEXPAND, 5);
    
    m_panel25 = new wxPanel(m_panelSyntaxHighlight, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    boxSizer21->Add(m_panel25, 1, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer3 = new wxBoxSizer(wxVERTICAL);
    m_panel25->SetSizer(bSizer3);
    
    m_notebook2 = new wxNotebook(m_panel25, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxBK_DEFAULT);
    
    bSizer3->Add(m_notebook2, 1, wxEXPAND, 5);
    
    m_panelGlobalSettings = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook2->AddPage(m_panelGlobalSettings, _("Global Settings"), true);
    
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxVERTICAL);
    m_panelGlobalSettings->SetSizer(bSizer6);
    
    wxFlexGridSizer* fgSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer2->SetFlexibleDirection( wxBOTH );
    fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer2->AddGrowableCol(1);
    
    bSizer6->Add(fgSizer2, 0, wxALL|wxEXPAND, 5);
    
    m_staticText70 = new wxStaticText(m_panelGlobalSettings, wxID_ANY, _("Available Themes:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    fgSizer2->Add(m_staticText70, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxBoxSizer* boxSizer95 = new wxBoxSizer(wxHORIZONTAL);
    
    fgSizer2->Add(boxSizer95, 0, wxEXPAND, 5);
    
    wxArrayString m_choiceLexerThemesArr;
    m_choiceLexerThemes = new wxChoice(m_panelGlobalSettings, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_choiceLexerThemesArr, 0);
    
    boxSizer95->Add(m_choiceLexerThemes, 1, wxALL|wxEXPAND, 5);
    
    m_staticText6 = new wxStaticText(m_panelGlobalSettings, wxID_ANY, _("Global Font:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText6, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_globalFontPicker = new wxFontPickerCtrl(m_panelGlobalSettings, wxID_ANY, wxNullFont, wxDefaultPosition, wxSize(-1, -1), wxFNTP_USEFONT_FOR_LABEL);
    m_globalFontPicker->SetToolTip(_("Use this to select a font to be used by *all* styles of this lexer"));
    
    fgSizer2->Add(m_globalFontPicker, 0, wxALL|wxEXPAND, 5);
    
    m_staticText7 = new wxStaticText(m_panelGlobalSettings, wxID_ANY, _("Global background Colour:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText7, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_globalBgColourPicker = new wxColourPickerCtrl(m_panelGlobalSettings, wxID_ANY, *wxBLACK, wxDefaultPosition, wxSize(-1, -1), wxCLRP_SHOW_LABEL|wxCLRP_USE_TEXTCTRL|wxCLRP_DEFAULT_STYLE);
    m_globalBgColourPicker->SetToolTip(_("Use this to select a background colour to be used by *all* styles of this lexer"));
    
    fgSizer2->Add(m_globalBgColourPicker, 0, wxALL|wxEXPAND, 5);
    
    m_staticText8 = new wxStaticText(m_panelGlobalSettings, wxID_ANY, _("File Extensions:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer2->Add(m_staticText8, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_fileSpec = new wxTextCtrl(m_panelGlobalSettings, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_fileSpec->SetToolTip(_("Associate this lexer with files which have these extensions"));
    #if wxVERSION_NUMBER >= 3000
    m_fileSpec->SetHint(wxT(""));
    #endif
    
    fgSizer2->Add(m_fileSpec, 0, wxALL|wxEXPAND, 5);
    
    m_panelCustomize = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook2->AddPage(m_panelCustomize, _("Customize"), false);
    
    wxBoxSizer* bSizer51 = new wxBoxSizer(wxVERTICAL);
    m_panelCustomize->SetSizer(bSizer51);
    
    wxBoxSizer* bSizer8 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer51->Add(bSizer8, 1, wxEXPAND, 5);
    
    wxArrayString m_propertiesArr;
    m_properties = new wxListBox(m_panelCustomize, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_propertiesArr, 0);
    
    bSizer8->Add(m_properties, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* bSizer9 = new wxBoxSizer(wxVERTICAL);
    
    bSizer8->Add(bSizer9, 1, wxEXPAND, 5);
    
    wxFlexGridSizer* fgSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer1->SetFlexibleDirection( wxBOTH );
    fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer1->AddGrowableCol(1);
    
    bSizer9->Add(fgSizer1, 1, wxALL|wxEXPAND, 5);
    
    m_staticText2 = new wxStaticText(m_panelCustomize, wxID_ANY, _("Style Font:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer1->Add(m_staticText2, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_fontPicker = new wxFontPickerCtrl(m_panelCustomize, wxID_ANY, wxNullFont, wxDefaultPosition, wxSize(-1, -1), wxFNTP_USEFONT_FOR_LABEL);
    m_fontPicker->SetToolTip(_("Select a font to be used with the selected style"));
    
    fgSizer1->Add(m_fontPicker, 0, wxALL|wxEXPAND, 5);
    
    m_staticText3 = new wxStaticText(m_panelCustomize, wxID_ANY, _("Foreground Colour:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer1->Add(m_staticText3, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_colourPicker = new wxColourPickerCtrl(m_panelCustomize, wxID_ANY, *wxBLACK, wxDefaultPosition, wxSize(-1, -1), wxCLRP_SHOW_LABEL|wxCLRP_USE_TEXTCTRL|wxCLRP_DEFAULT_STYLE);
    m_colourPicker->SetToolTip(_("Select the foreground colour for the selected style"));
    
    fgSizer1->Add(m_colourPicker, 0, wxALL|wxEXPAND, 5);
    
    m_staticText4 = new wxStaticText(m_panelCustomize, wxID_ANY, _("Background Colour:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer1->Add(m_staticText4, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_bgColourPicker = new wxColourPickerCtrl(m_panelCustomize, wxID_ANY, *wxBLACK, wxDefaultPosition, wxSize(-1, -1), wxCLRP_SHOW_LABEL|wxCLRP_USE_TEXTCTRL|wxCLRP_DEFAULT_STYLE);
    m_bgColourPicker->SetToolTip(_("Select the background colour for the selected style"));
    
    fgSizer1->Add(m_bgColourPicker, 0, wxALL|wxEXPAND, 5);
    
    fgSizer1->Add(0, 0, 1, wxEXPAND, 5);
    
    m_eolFilled = new wxCheckBox(m_panelCustomize, wxID_ANY, _("Style is EOL Filled"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_eolFilled->SetValue(false);
    m_eolFilled->SetToolTip(_("If a line ends with a character/word which has this style, the remaining of the line will be coloured with this style background colour"));
    
    fgSizer1->Add(m_eolFilled, 0, wxALL, 5);
    
    fgSizer1->Add(0, 0, 1, wxEXPAND, 5);
    
    m_styleWithinPreProcessor = new wxCheckBox(m_panelCustomize, wxID_ANY, _("Styling Within Pre-processor Line"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_styleWithinPreProcessor->SetValue(false);
    
    fgSizer1->Add(m_styleWithinPreProcessor, 0, wxALL, 5);
    
    m_staticline1 = new wxStaticLine(m_panelCustomize, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxLI_HORIZONTAL);
    
    bSizer9->Add(m_staticline1, 0, wxALL|wxEXPAND, 5);
    
    m_staticText1 = new wxStaticText(m_panelCustomize, wxID_ANY, _("Edit Lexer Keyword Sets:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    bSizer9->Add(m_staticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    
    wxBoxSizer* bSizer5 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer9->Add(bSizer5, 0, wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_button5 = new wxButton(m_panelCustomize, wxID_ANY, _("Set &0"), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    
    bSizer5->Add(m_button5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_button6 = new wxButton(m_panelCustomize, wxID_ANY, _("Set &1"), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    
    bSizer5->Add(m_button6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_button7 = new wxButton(m_panelCustomize, wxID_ANY, _("Set &2"), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    
    bSizer5->Add(m_button7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_button8 = new wxButton(m_panelCustomize, wxID_ANY, _("Set &3"), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    
    bSizer5->Add(m_button8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_button9 = new wxButton(m_panelCustomize, wxID_ANY, _("Set &4"), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    
    bSizer5->Add(m_button9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_panelTextSelection = new wxPanel(m_notebook2, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook2->AddPage(m_panelTextSelection, _("Text Selection"), false);
    
    wxBoxSizer* bSizer7 = new wxBoxSizer(wxVERTICAL);
    m_panelTextSelection->SetSizer(bSizer7);
    
    wxFlexGridSizer* fgSizer3 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer3->SetFlexibleDirection( wxBOTH );
    fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer3->AddGrowableCol(1);
    
    bSizer7->Add(fgSizer3, 0, wxALL|wxEXPAND, 5);
    
    m_staticText9 = new wxStaticText(m_panelTextSelection, wxID_ANY, _("Selected Text Background Colour:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer3->Add(m_staticText9, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_colourPickerSelTextBgColour = new wxColourPickerCtrl(m_panelTextSelection, wxID_ANY, wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT), wxDefaultPosition, wxSize(-1, -1), wxCLRP_SHOW_LABEL|wxCLRP_USE_TEXTCTRL|wxCLRP_DEFAULT_STYLE);
    
    fgSizer3->Add(m_colourPickerSelTextBgColour, 0, wxALL|wxEXPAND, 5);
    
    m_staticText94 = new wxStaticText(m_panelTextSelection, wxID_ANY, _("Use Custom Selection Forground Colour:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    fgSizer3->Add(m_staticText94, 0, wxALL|wxALIGN_RIGHT, 5);
    
    m_checkBoxCustomSelectionFgColour = new wxCheckBox(m_panelTextSelection, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_checkBoxCustomSelectionFgColour->SetValue(false);
    m_checkBoxCustomSelectionFgColour->SetToolTip(_("You can choose to override the default selection colouring by enabling this checkbox"));
    
    fgSizer3->Add(m_checkBoxCustomSelectionFgColour, 0, wxALL|wxEXPAND|wxALIGN_RIGHT, 5);
    
    m_staticText84 = new wxStaticText(m_panelTextSelection, wxID_ANY, _("Selected Text Foreground Colour:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    fgSizer3->Add(m_staticText84, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_colourPickerSelTextFgColour = new wxColourPickerCtrl(m_panelTextSelection, wxID_ANY, wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHTTEXT), wxDefaultPosition, wxSize(-1,-1), wxCLRP_SHOW_LABEL|wxCLRP_USE_TEXTCTRL|wxCLRP_DEFAULT_STYLE);
    
    fgSizer3->Add(m_colourPickerSelTextFgColour, 0, wxALL|wxEXPAND, 5);
    
    m_panelGlobalColours = new wxPanel(m_notebook76, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    m_notebook76->AddPage(m_panelGlobalColours, _("Global Colours"), false);
    
    wxBoxSizer* boxSizer82 = new wxBoxSizer(wxVERTICAL);
    m_panelGlobalColours->SetSizer(boxSizer82);
    
    wxFlexGridSizer* fgSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
    fgSizer4->SetFlexibleDirection( wxBOTH );
    fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer4->AddGrowableCol(1);
    
    boxSizer82->Add(fgSizer4, 0, wxALL|wxEXPAND, 5);
    
    m_staticText91 = new wxStaticText(m_panelGlobalColours, wxID_ANY, _("Global foreground Colour:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer4->Add(m_staticText91, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_colourPickerOutputPanesFgColour = new wxColourPickerCtrl(m_panelGlobalColours, wxID_ANY, *wxBLACK, wxDefaultPosition, wxSize(-1, -1), wxCLRP_SHOW_LABEL|wxCLRP_USE_TEXTCTRL|wxCLRP_DEFAULT_STYLE);
    m_colourPickerOutputPanesFgColour->SetToolTip(_("This is where you can set the foreground colour for the Output View panes (where you can see the output from e.g. 'Build' or 'Debug') and terminal (where you see the trace output while debugging)"));
    
    fgSizer4->Add(m_colourPickerOutputPanesFgColour, 0, wxALL|wxEXPAND, 5);
    
    m_staticText911 = new wxStaticText(m_panelGlobalColours, wxID_ANY, _("Global background Colour:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer4->Add(m_staticText911, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_colourPickerOutputPanesBgColour = new wxColourPickerCtrl(m_panelGlobalColours, wxID_ANY, *wxBLACK, wxDefaultPosition, wxSize(-1, -1), wxCLRP_SHOW_LABEL|wxCLRP_USE_TEXTCTRL|wxCLRP_DEFAULT_STYLE);
    m_colourPickerOutputPanesBgColour->SetToolTip(_("This is where you can set the background colour for the Output View panes (where you can see the output from e.g. 'Build' or 'Debug') and terminal (where you see the trace output while debugging)"));
    
    fgSizer4->Add(m_colourPickerOutputPanesBgColour, 0, wxALL|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer19 = new wxBoxSizer(wxHORIZONTAL);
    
    bSizer1->Add(boxSizer19, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    
    m_stdBtnSizer10 = new wxStdDialogButtonSizer();
    
    boxSizer19->Add(m_stdBtnSizer10, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOk = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOk->SetDefault();
    m_stdBtnSizer10->AddButton(m_buttonOk);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer10->AddButton(m_buttonCancel);
    
    m_buttonApply = new wxButton(this, wxID_APPLY, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer10->AddButton(m_buttonApply);
    m_stdBtnSizer10->Realize();
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    this->Connect(wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnNewTheme), NULL, this);
    this->Connect(wxID_SAVE, wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN, wxAuiToolBarEventHandler(SyntaxHighlightBaseDlg::OnToolExportAll), NULL, this);
    this->Connect(m_menuItemExportAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnExportAll), NULL, this);
    this->Connect(m_menuItemExportSelective->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnExportSelective), NULL, this);
    this->Connect(wxID_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnImport), NULL, this);
    this->Connect(wxID_REVERT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnRestoreDefaults), NULL, this);
    this->Connect(ID_TOOL_IMPORT_ECLIPSE_THEME, wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN, wxAuiToolBarEventHandler(SyntaxHighlightBaseDlg::OnImportEclipseTheme), NULL, this);
    this->Connect(m_menuItem153->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnLoadEclipseThemeWebsite), NULL, this);
    m_listBox->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnLexerSelected), NULL, this);
    m_choiceLexerThemes->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnThemeChanged), NULL, this);
    m_globalFontPicker->Connect(wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler(SyntaxHighlightBaseDlg::OnFontChanged), NULL, this);
    m_globalBgColourPicker->Connect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnColourChanged), NULL, this);
    m_fileSpec->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnText), NULL, this);
    m_properties->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnItemSelected), NULL, this);
    m_fontPicker->Connect(wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler(SyntaxHighlightBaseDlg::OnFontChanged), NULL, this);
    m_colourPicker->Connect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnColourChanged), NULL, this);
    m_bgColourPicker->Connect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnColourChanged), NULL, this);
    m_eolFilled->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEolFilled), NULL, this);
    m_styleWithinPreProcessor->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnStyleWithinPreprocessor), NULL, this);
    m_styleWithinPreProcessor->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(SyntaxHighlightBaseDlg::OnStyleWithingPreProcessorUI), NULL, this);
    m_button5->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton0), NULL, this);
    m_button6->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton1), NULL, this);
    m_button7->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton2), NULL, this);
    m_button8->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton3), NULL, this);
    m_button9->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton4), NULL, this);
    m_colourPickerSelTextBgColour->Connect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnSelTextChanged), NULL, this);
    m_checkBoxCustomSelectionFgColour->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnUseCustomFgTextColour), NULL, this);
    m_staticText84->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(SyntaxHighlightBaseDlg::OnTextSelFgUI), NULL, this);
    m_colourPickerSelTextFgColour->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(SyntaxHighlightBaseDlg::OnTextSelFgUI), NULL, this);
    m_colourPickerSelTextFgColour->Connect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnSelTextFgChanged), NULL, this);
    m_colourPickerOutputPanesFgColour->Connect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnOutputViewColourChanged), NULL, this);
    m_colourPickerOutputPanesBgColour->Connect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnOutputViewColourChanged), NULL, this);
    m_buttonOk->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnButtonOK), NULL, this);
    m_buttonCancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnButtonCancel), NULL, this);
    m_buttonApply->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnButtonApply), NULL, this);
    m_buttonApply->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(SyntaxHighlightBaseDlg::OnButtonApplyUI), NULL, this);
    
    this->Connect(wxID_ANY, wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN, wxAuiToolBarEventHandler(SyntaxHighlightBaseDlg::ShowAuiToolMenu), NULL, this);
}

SyntaxHighlightBaseDlg::~SyntaxHighlightBaseDlg()
{
    this->Disconnect(wxID_NEW, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnNewTheme), NULL, this);
    this->Disconnect(wxID_SAVE, wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN, wxAuiToolBarEventHandler(SyntaxHighlightBaseDlg::OnToolExportAll), NULL, this);
    this->Disconnect(m_menuItemExportAll->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnExportAll), NULL, this);
    this->Disconnect(m_menuItemExportSelective->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnExportSelective), NULL, this);
    this->Disconnect(wxID_OPEN, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnImport), NULL, this);
    this->Disconnect(wxID_REVERT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnRestoreDefaults), NULL, this);
    this->Disconnect(ID_TOOL_IMPORT_ECLIPSE_THEME, wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN, wxAuiToolBarEventHandler(SyntaxHighlightBaseDlg::OnImportEclipseTheme), NULL, this);
    this->Disconnect(m_menuItem153->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnLoadEclipseThemeWebsite), NULL, this);
    m_listBox->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnLexerSelected), NULL, this);
    m_choiceLexerThemes->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnThemeChanged), NULL, this);
    m_globalFontPicker->Disconnect(wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler(SyntaxHighlightBaseDlg::OnFontChanged), NULL, this);
    m_globalBgColourPicker->Disconnect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnColourChanged), NULL, this);
    m_fileSpec->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnText), NULL, this);
    m_properties->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnItemSelected), NULL, this);
    m_fontPicker->Disconnect(wxEVT_COMMAND_FONTPICKER_CHANGED, wxFontPickerEventHandler(SyntaxHighlightBaseDlg::OnFontChanged), NULL, this);
    m_colourPicker->Disconnect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnColourChanged), NULL, this);
    m_bgColourPicker->Disconnect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnColourChanged), NULL, this);
    m_eolFilled->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEolFilled), NULL, this);
    m_styleWithinPreProcessor->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnStyleWithinPreprocessor), NULL, this);
    m_styleWithinPreProcessor->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(SyntaxHighlightBaseDlg::OnStyleWithingPreProcessorUI), NULL, this);
    m_button5->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton0), NULL, this);
    m_button6->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton1), NULL, this);
    m_button7->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton2), NULL, this);
    m_button8->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton3), NULL, this);
    m_button9->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnEditKeyWordsButton4), NULL, this);
    m_colourPickerSelTextBgColour->Disconnect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnSelTextChanged), NULL, this);
    m_checkBoxCustomSelectionFgColour->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnUseCustomFgTextColour), NULL, this);
    m_staticText84->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(SyntaxHighlightBaseDlg::OnTextSelFgUI), NULL, this);
    m_colourPickerSelTextFgColour->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(SyntaxHighlightBaseDlg::OnTextSelFgUI), NULL, this);
    m_colourPickerSelTextFgColour->Disconnect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnSelTextFgChanged), NULL, this);
    m_colourPickerOutputPanesFgColour->Disconnect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnOutputViewColourChanged), NULL, this);
    m_colourPickerOutputPanesBgColour->Disconnect(wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler(SyntaxHighlightBaseDlg::OnOutputViewColourChanged), NULL, this);
    m_buttonOk->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnButtonOK), NULL, this);
    m_buttonCancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnButtonCancel), NULL, this);
    m_buttonApply->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(SyntaxHighlightBaseDlg::OnButtonApply), NULL, this);
    m_buttonApply->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(SyntaxHighlightBaseDlg::OnButtonApplyUI), NULL, this);
    
    std::map<int, wxMenu*>::iterator menuIter = m_dropdownMenus.begin();
    for( ; menuIter != m_dropdownMenus.end(); ++menuIter ) {
        wxDELETE( menuIter->second );
    }
    m_dropdownMenus.clear();

    this->Disconnect(wxID_ANY, wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN, wxAuiToolBarEventHandler(SyntaxHighlightBaseDlg::ShowAuiToolMenu), NULL, this);
}


void SyntaxHighlightBaseDlg::ShowAuiToolMenu(wxAuiToolBarEvent& event)
{
    event.Skip();
    if (event.IsDropDownClicked()) {
        wxAuiToolBar* toolbar = wxDynamicCast(event.GetEventObject(), wxAuiToolBar);
        if (toolbar) {
            wxAuiToolBarItem* item = toolbar->FindTool(event.GetId());
            if (item) {
                std::map<int, wxMenu*>::iterator iter = m_dropdownMenus.find(item->GetId());
                if (iter != m_dropdownMenus.end()) {
                    event.Skip(false);
                    wxPoint pt = event.GetItemRect().GetBottomLeft();
                    pt.y++;
                    toolbar->PopupMenu(iter->second, pt);
                }
            }
        }
    }
}
NewThemeDialogBase::NewThemeDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterqEa5vvInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizer115 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer115);
    
    wxFlexGridSizer* flexGridSizer125 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer125->SetFlexibleDirection( wxBOTH );
    flexGridSizer125->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer125->AddGrowableCol(1);
    
    boxSizer115->Add(flexGridSizer125, 1, wxALL|wxEXPAND, 5);
    
    m_staticText127 = new wxStaticText(this, wxID_ANY, _("Theme Name:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer125->Add(m_staticText127, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_textCtrlName = new wxTextCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), 0);
    m_textCtrlName->SetToolTip(_("Set the theme name"));
    m_textCtrlName->SetFocus();
    #if wxVERSION_NUMBER >= 3000
    m_textCtrlName->SetHint(wxT(""));
    #endif
    
    flexGridSizer125->Add(m_textCtrlName, 0, wxALL|wxEXPAND, 5);
    
    m_staticText131 = new wxStaticText(this, wxID_ANY, _("Language:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer125->Add(m_staticText131, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceLanguageArr;
    m_choiceLanguage = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_choiceLanguageArr, 0);
    m_choiceLanguage->SetToolTip(_("Make this theme for this language"));
    
    flexGridSizer125->Add(m_choiceLanguage, 0, wxALL|wxEXPAND, 5);
    
    m_staticText135 = new wxStaticText(this, wxID_ANY, _("Based on Theme:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer125->Add(m_staticText135, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceBaseThemeArr;
    m_choiceBaseTheme = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_choiceBaseThemeArr, 0);
    m_choiceBaseTheme->SetToolTip(_("Set the base theme for this new theme"));
    
    flexGridSizer125->Add(m_choiceBaseTheme, 0, wxALL|wxEXPAND, 5);
    
    m_stdBtnSizer117 = new wxStdDialogButtonSizer();
    
    boxSizer115->Add(m_stdBtnSizer117, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOK = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOK->SetDefault();
    m_stdBtnSizer117->AddButton(m_buttonOK);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer117->AddButton(m_buttonCancel);
    m_stdBtnSizer117->Realize();
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    m_choiceLanguage->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(NewThemeDialogBase::OnLexerSelected), NULL, this);
    m_buttonOK->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewThemeDialogBase::OnOkUI), NULL, this);
    
}

NewThemeDialogBase::~NewThemeDialogBase()
{
    m_choiceLanguage->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(NewThemeDialogBase::OnLexerSelected), NULL, this);
    m_buttonOK->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(NewThemeDialogBase::OnOkUI), NULL, this);
    
}
