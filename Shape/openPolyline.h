#pragma once
#include "stdafx.h"
#include <vector>
namespace ShapeLibrary
{
	class OpenPolyline : Shape
	{
	public:
		OpenPolyline(IWindowAPI& _IWindowAPI);
		~OpenPolyline();
		void draw();
		void add(const Point & _point);
	private:
		vector<Point> vecPoints;
	};
}
