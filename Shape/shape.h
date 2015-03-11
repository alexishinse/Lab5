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

		virtual void add(const Point & _point);
		virtual void draw(const string & _typeDessin);
		const IWindowAPI & getIWindow();
		const vector<Point> getVector();
	private:
		IWindowAPI  *iWindowAPI;
		vector<Point> vecPoints;
	};
}
