#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class	ShapeFactory
	{
	public:
		ShapeFactory(IWindowAPI & _iWindowAPI);
		OpenPolyline & createOpenPolyLine();
		ClosedPolyline & createClosedPolyLine();
		Polygon & createPolygone();
		Circle & createCircle(const Point & _point, int _radius);
		Rectangle & createRectangle(const Point & _point, int _width, int _height);
	private:
		IWindowAPI  *iWindowAPI;	
	};
}