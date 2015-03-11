#pragma once
#include "stdafx.h"
#include <stack>
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

	};
}
