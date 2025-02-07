
// MFCGDIDemoView.h : interface of the CMFCGDIDemoView class
//

#pragma once


class CMFCGDIDemoView : public CView
{
protected: // create from serialization only
	CMFCGDIDemoView() noexcept;
	DECLARE_DYNCREATE(CMFCGDIDemoView)

// Attributes
public:
	CMFCGDIDemoDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMFCGDIDemoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCGDIDemoView.cpp
inline CMFCGDIDemoDoc* CMFCGDIDemoView::GetDocument() const
   { return reinterpret_cast<CMFCGDIDemoDoc*>(m_pDocument); }
#endif

