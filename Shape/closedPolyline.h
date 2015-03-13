#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class ClosedPolyline : public OpenPolyline
	{
	public:
		ClosedPolyline::ClosedPolyline(IWindowAPI & _IWindowAPI);
		ClosedPolyline::~ClosedPolyline();
		virtual void add(const Point & _point);
		void draw();
	};
}