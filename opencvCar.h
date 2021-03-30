// opencvCar.h : main header file for the OPENCVCAR application
//

#if !defined(AFX_OPENCVCAR_H__B1C0F60D_2439_4923_927B_B21F86B34655__INCLUDED_)
#define AFX_OPENCVCAR_H__B1C0F60D_2439_4923_927B_B21F86B34655__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
#include "cv.h"
#include "highgui.h"

/////////////////////////////////////////////////////////////////////////////
// COpencvCarApp:
// See opencvCar.cpp for the implementation of this class
//

class COpencvCarApp : public CWinApp
{
public:
	COpencvCarApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COpencvCarApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(COpencvCarApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OPENCVCAR_H__B1C0F60D_2439_4923_927B_B21F86B34655__INCLUDED_)
