#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle : public Shape
	{
	public:
		Rectangle(IWindowAPI& _IWindowAPI);
		~Rectangle();
		void draw();
		void setHeight(int _height);
		void setPosition(const Point & _position);
		void setWidth(int _width);
		void setFillColor(Color::COLOR_TYPE _color);
		void setLineColor(Color::COLOR_TYPE _color);
	private:
		int height;
		int width;
		void drawFilledRectangle();
		void drawRectangle();
	};
}