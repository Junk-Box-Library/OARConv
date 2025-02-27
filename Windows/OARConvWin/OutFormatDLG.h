﻿#pragma once


// COutFormatDLG ダイアログ

class COutFormatDLG : public CDialogEx
{
    DECLARE_DYNAMIC(COutFormatDLG)

public:
    COutFormatDLG(CParameterSet* param, CWnd* pParent=NULL);   // 標準コンストラクター
    virtual ~COutFormatDLG();

// ダイアログ データ
    enum { IDD = IDD_DIALOG_OUTPUT };

//
protected:
    int      outputFormat;
    int      outputEngine;
    BOOL     noOffset;          // No Offset
    BOOL     procJoints;
//
protected:
    CButton* outputDaeButton;
    CButton* outputObjButton;
    CButton* outputGltfButton;
    CButton* outputGlbButton;
    CButton* outputFbxButton;
    CButton* outputStlButton;

    CButton* outputUnityButton;
    CButton* outputUEButton;

    CButton* procJointsButton;
    CButton* noOffsetButton;

public:
    void     getParameters(CParameterSet* param);
//
protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV サポート

public:
    virtual BOOL OnInitDialog();
    virtual void OnOK();
    DECLARE_MESSAGE_MAP()
    afx_msg void OnBnClickedRadioObj();
    afx_msg void OnBnClickedRadioDae();
    afx_msg void OnBnClickedRadioStl();
    afx_msg void OnBnClickedRadioGltf();
    afx_msg void OnBnClickedRadioGlb();
    afx_msg void OnBnClickedRadioFbx();
    //afx_msg void OnBnClickedCheckJoints();
};
