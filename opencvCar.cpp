// opencvCar.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "opencvCar.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COpencvCarApp

BEGIN_MESSAGE_MAP(COpencvCarApp, CWinApp)
	//{{AFX_MSG_MAP(COpencvCarApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COpencvCarApp construction

COpencvCarApp::COpencvCarApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only COpencvCarApp object

COpencvCarApp theApp;

/////////////////////////////////////////////////////////////////////////////
// COpencvCarApp initialization

BOOL COpencvCarApp::InitInstance()
{
	AfxEnableControlContainer();
    CMyDialog dlg;
	dlg.DoModal();
	return false;
}
 
 