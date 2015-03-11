#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Circle : Shape
	{
	public:
		Circle(IWindowAPI& _IWindowAPI);
		~Circle();
		void draw();
		void setCenter(Point & _position);
		void setRadius(int _radius);
		void setFillColor(Color::COLOR_TYPE _color);
		void setLineColor(Color::COLOR_TYPE _color);
	private:
		int radius = NULL;
		Point* positionCenter = NULL;
	};
}
