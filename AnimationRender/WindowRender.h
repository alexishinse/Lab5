#pragma once
#include "stdafx.h"

using namespace std;
using namespace ShapeLibrary;

namespace WindowRender
{
	class WindowsRender
	{
	public:
		WindowsRender(IWindowAPI & _IWindowAPI);
		~WindowsRender();
		void render();
		void attach(Shape  &_shape);
		void putOnTop(Shape & _shape);
	private:
		IWindowAPI* iWindowAPI;
		vector<Shape*> vecShapes;

	};
}