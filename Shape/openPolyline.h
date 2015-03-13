#pragma once
#include "stdafx.h"
#include <vector>
namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(IWindowAPI& _IWindowAPI);
		~OpenPolyline();
		void draw();
		virtual void add(const Point & _point);
	};
}
