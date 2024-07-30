
// MFCGDIDemo.h : main header file for the MFCGDIDemo application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCGDIDemoApp:
// See MFCGDIDemo.cpp for the implementation of this class
//

class CMFCGDIDemoApp : public CWinApp
{
public:
	CMFCGDIDemoApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCGDIDemoApp theApp;
