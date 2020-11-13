/***************************************************************
 * Name:      CodeBlocks_blank_prject_linuxMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2020-11-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "CodeBlocks_blank_prject_linuxMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(CodeBlocks_blank_prject_linuxFrame)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(CodeBlocks_blank_prject_linuxFrame)
const long CodeBlocks_blank_prject_linuxFrame::ID_STATICTEXT1 = wxNewId();
const long CodeBlocks_blank_prject_linuxFrame::ID_STATICTEXT2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CodeBlocks_blank_prject_linuxFrame,wxFrame)
    //(*EventTable(CodeBlocks_blank_prject_linuxFrame)
    //*)
END_EVENT_TABLE()

CodeBlocks_blank_prject_linuxFrame::CodeBlocks_blank_prject_linuxFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(CodeBlocks_blank_prject_linuxFrame)
    Create(parent, id, _("Пример пустой программы"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(600,400));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_HOME")),wxART_FRAME_ICON));
    	SetIcon(FrameIcon);
    }
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Наносите компоненты"), wxPoint(168,96), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("И делайте обрабтчики событий к ним"), wxPoint(216,224), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    Center();
    //*)
}

CodeBlocks_blank_prject_linuxFrame::~CodeBlocks_blank_prject_linuxFrame()
{
    //(*Destroy(CodeBlocks_blank_prject_linuxFrame)
    //*)
}
