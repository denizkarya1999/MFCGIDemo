
// MFCGDIDemoView.cpp : implementation of the CMFCGDIDemoView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFCGDIDemo.h"
#endif

#include "MFCGDIDemoDoc.h"
#include "MFCGDIDemoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCGDIDemoView

IMPLEMENT_DYNCREATE(CMFCGDIDemoView, CView)

BEGIN_MESSAGE_MAP(CMFCGDIDemoView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFCGDIDemoView construction/destruction

CMFCGDIDemoView::CMFCGDIDemoView() noexcept
{
	// TODO: add construction code here

}

CMFCGDIDemoView::~CMFCGDIDemoView()
{
}

BOOL CMFCGDIDemoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFCGDIDemoView drawing

void CMFCGDIDemoView::OnDraw(CDC* pDC)
{
	CMFCGDIDemoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	CBrush brush(RGB(100, 150, 200));
	CBrush* pBrush = pDC->SelectObject(&brush);

	pDC->Rectangle(25, 35, 250, 125);
	pDC->SelectObject(pBrush);
}


// CMFCGDIDemoView printing

BOOL CMFCGDIDemoView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCGDIDemoView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCGDIDemoView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFCGDIDemoView diagnostics

#ifdef _DEBUG
void CMFCGDIDemoView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCGDIDemoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCGDIDemoDoc* CMFCGDIDemoView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCGDIDemoDoc)));
	return (CMFCGDIDemoDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCGDIDemoView message handlers
