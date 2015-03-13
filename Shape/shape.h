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
		virtual void draw() = 0;
		virtual void add(const Point & _point);
	protected:
		IWindowAPI  *iWindowAPI;
		Color::COLOR_TYPE filledColor = Color::COLOR_TYPE::BLUE;
		Color::COLOR_TYPE drawColor = Color::COLOR_TYPE::GREEN;
		void SetFilledShapeColor();
		void SetShapeColor();
		vector<Point> vecPoints;
	};
}
