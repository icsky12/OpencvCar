#if !defined(AFX_MYDIALOG_H__B6434C71_8E01_4626_9A64_0274542AB5E9__INCLUDED_)
#define AFX_MYDIALOG_H__B6434C71_8E01_4626_9A64_0274542AB5E9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMyDialog dialog

class CMyDialog : public CDialog
{
// Construction
public:
	int CodeRecognize(IplImage *imgTest,int num,int char_num);
	int SegmentPlate();
	int PlateAreaSearch(IplImage *pImg_Image);
	void Threshold(IplImage *Image,IplImage *Image_O);
	int AdaptiveThreshold(int t,IplImage *Image);
	void DrawPicToHDC(IplImage *img, UINT ID);
	CMyDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CMyDialog)
	enum { IDD = IDD_CARDIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	IplImage *src ;                                // 原始图片
	IplImage *pImgCanny;                      //二值化的图
	IplImage *pImgResize;                     //归一化的车牌区域灰度图
	IplImage *pImgCharOne;                // 字符图片
	IplImage *pImgCharTwo;
	IplImage *pImgCharThree;
	IplImage *pImgCharFour;
	IplImage *pImgCharFive;
	IplImage *pImgCharSix;
	IplImage *pImgCharSeven;

	// Generated message map functions
	//{{AFX_MSG(CMyDialog)
	afx_msg void OnLoadimage();
	afx_msg void OnBinaryimg();
	afx_msg void OnCarlocate();
	afx_msg void OnSplitcar();
	afx_msg void OnShibiecar();
	afx_msg void ABOUT();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDIALOG_H__B6434C71_8E01_4626_9A64_0274542AB5E9__INCLUDED_)
