#include "cbase.h"
#include "rd_collections.h"
#include "rd_swarmopedia.h"
#include <vgui_controls/ImagePanel.h>

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"


CRD_Collection_Tab_Swarmopedia::CRD_Collection_Tab_Swarmopedia( TabbedGridDetails *parent, const char *szLabel )
	: BaseClass( parent, szLabel )
{
	m_pCollection = NULL;
}

CRD_Collection_Tab_Swarmopedia::~CRD_Collection_Tab_Swarmopedia()
{
	if ( m_pCollection )
	{
		delete m_pCollection;

		m_pCollection = NULL;
	}
}

TGD_Grid *CRD_Collection_Tab_Swarmopedia::CreateGrid()
{
	TGD_Grid *pGrid = BaseClass::CreateGrid();

	Assert( !m_pCollection );
	m_pCollection = new RD_Swarmopedia::Collection();
	m_pCollection->ReadFromFiles();

	FOR_EACH_VEC( m_pCollection->Aliens, i )
	{
		pGrid->AddEntry( new CRD_Collection_Entry_Swarmopedia( pGrid, "CollectionEntrySwarmopedia", m_pCollection->Aliens[i] ) );
	}

	return pGrid;
}

TGD_Details *CRD_Collection_Tab_Swarmopedia::CreateDetails()
{
	return new CRD_Collection_Details_Swarmopedia( this );
}

CRD_Collection_Details_Swarmopedia::CRD_Collection_Details_Swarmopedia( CRD_Collection_Tab_Swarmopedia *parent )
	: BaseClass( parent )
{
}

void CRD_Collection_Details_Swarmopedia::ApplySchemeSettings( vgui::IScheme *pScheme )
{
	BaseClass::ApplySchemeSettings( pScheme );
}

void CRD_Collection_Details_Swarmopedia::DisplayEntry( TGD_Entry *pEntry )
{
	Assert( !"TODO: display entry" );
}

CRD_Collection_Entry_Swarmopedia::CRD_Collection_Entry_Swarmopedia( TGD_Grid *parent, const char *panelName, RD_Swarmopedia::Alien *pAlien )
	: BaseClass( parent, panelName )
{
	m_pAlien = pAlien;

	m_pImage = new vgui::ImagePanel( this, "Image" );
}

void CRD_Collection_Entry_Swarmopedia::ApplySchemeSettings( vgui::IScheme *pScheme )
{
	BaseClass::ApplySchemeSettings( pScheme );

	m_pImage->SetImage( m_pAlien->Image );
	m_pImage->SetDrawColor( m_pAlien->AllRequirementsSatisfied() ? Color( 255, 255, 255, 255 ) : Color( 0, 0, 0, 255 ) );
}

void CRD_Collection_Entry_Swarmopedia::ApplyEntry()
{
	Assert( !"TODO: open swarmopedia big view" );
}
