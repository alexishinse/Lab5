#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Polygon : public ClosedPolyline
	{
	public:
		Polygon::Polygon(IWindowAPI & _IWindowAPI);
		Polygon::~Polygon();
		virtual void add(const Point & _point);
		void draw();
	private:
		double getVariationLine(const Point & _point1, const Point & _point2);
		bool isPointOnLine(const Point & _point);
		bool isLineCrossingAnother(const Point & _point);
	};
}
