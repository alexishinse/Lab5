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
		IWindowAPI & getIWindow();
	private:
		IWindowAPI  *iWindowAPI;		
	};
}
