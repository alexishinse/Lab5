#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle : Shape
	{
	public:
		Rectangle(IWindowAPI& _IWindowAPI);
		~Rectangle();
		void draw();
		void setHeight(int _height);
		void setPosition(Point & _position);
		void setWidth(int _width);
		void setFillColor(Color::COLOR_TYPE _color);
		void setLineColor(Color::COLOR_TYPE _color);
	private:
		Point* position = NULL;
		int height;
		int width;
	};
}