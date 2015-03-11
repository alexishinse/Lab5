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
		void setHeight(unsigned int _height);
		void setPosition(Point & _position);
		void setWidth(unsigned int _width);
	private:
		Point* position;
		unsigned int height;
		unsigned int width;
		Color::COLOR_TYPE filledColor = Color::COLOR_TYPE::CYAN;
	};
}