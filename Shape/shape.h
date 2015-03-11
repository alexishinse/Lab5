#pragma once
#include "stdafx.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape(IWindowAPI & _IWindowAPI);
		~Shape();
		virtual void draw();
		IWindowAPI & getIWindow();
		void setFilledColor(Color::COLOR_TYPE _color);
		void setDrawColor(Color::COLOR_TYPE _color);
	private:
		IWindowAPI  *iWindowAPI;
		Color::COLOR_TYPE filledColor = Color::COLOR_TYPE::BLUE;
		Color::COLOR_TYPE drawColor = Color::COLOR_TYPE::GREEN;
	};
}
