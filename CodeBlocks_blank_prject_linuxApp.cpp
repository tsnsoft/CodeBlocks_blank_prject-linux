/***************************************************************
 * Name:      CodeBlocks_blank_prject_linuxApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2020-11-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "CodeBlocks_blank_prject_linuxApp.h"

//(*AppHeaders
#include "CodeBlocks_blank_prject_linuxMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CodeBlocks_blank_prject_linuxApp);

bool CodeBlocks_blank_prject_linuxApp::OnInit()
{
    wxLocale m_locale;
 	m_locale.Init(wxLANGUAGE_RUSSIAN);

    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	CodeBlocks_blank_prject_linuxFrame* Frame = new CodeBlocks_blank_prject_linuxFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
