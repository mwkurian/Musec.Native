///////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __CUSTOMPANEL_H__
#define __CUSTOMPANEL_H__

//+-----------------------------------------------------------------------------
//
//  Struct:
//      PANEL
//
//  Synopsis:
//      Differentiates which of the two possible arcs could match the given arc
//      parameters.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "NotificationCenter.h"
#include "../../../Aurora-SDK/Include/Core/Component.h"
#include GRAPHICS

////////////////////////////////////////////////////////////////////////////////
// FORWARD DECLARATIONS
////////////////////////////////////////////////////////////////////////////////

class Abstract;

////////////////////////////////////////////////////////////////////////////////
// DECLARATION
////////////////////////////////////////////////////////////////////////////////

using namespace A2D;

class CustomPanel : public Component
{

public:

	CustomPanel();
	
private:

	float translationX = 0;
	float translationXG1 = 10;
	float translationYG1 = 10;
	float translationY = 0;
	float translationYDirection = 1;
	float translationXDirection = 1;
	float translationXDirectionG1 = 1;
	float translationYDirectionG1 = 1;

	Pipeline				*		aPipeline = NULL;

protected:

	virtual void paintComponent();

};

#endif
