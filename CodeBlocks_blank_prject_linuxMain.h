/***************************************************************
 * Name:      CodeBlocks_blank_prject_linuxMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-11-13
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef CODEBLOCKS_BLANK_PRJECT_LINUXMAIN_H
#define CODEBLOCKS_BLANK_PRJECT_LINUXMAIN_H

//(*Headers(CodeBlocks_blank_prject_linuxFrame)
#include <wx/frame.h>
#include <wx/stattext.h>
//*)

class CodeBlocks_blank_prject_linuxFrame: public wxFrame
{
    public:

        CodeBlocks_blank_prject_linuxFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~CodeBlocks_blank_prject_linuxFrame();

    private:

        //(*Handlers(CodeBlocks_blank_prject_linuxFrame)
        //*)

        //(*Identifiers(CodeBlocks_blank_prject_linuxFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        //*)

        //(*Declarations(CodeBlocks_blank_prject_linuxFrame)
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // CODEBLOCKS_BLANK_PRJECT_LINUXMAIN_H
