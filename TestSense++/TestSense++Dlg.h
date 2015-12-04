
// TestSense++Dlg.h : header file
//

#pragma once
#include "afxeditbrowsectrl.h"


// CTestSenseDlg dialog
class CTestSenseDlg : public CDialogEx
{
// Construction
public:
	CTestSenseDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_TESTSENSE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeMfceditbrowse1();
	CMFCEditBrowseCtrl scriptSrc;
	afx_msg void OnEnChangeEdit1();
};
