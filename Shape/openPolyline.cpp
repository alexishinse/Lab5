#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI & _IWindowAPI)
	:Shape(_IWindowAPI)
{

}

OpenPolyline::~OpenPolyline(){
}

void OpenPolyline::draw(){
	Shape::draw("OPEN_POLYLINE");
}

void OpenPolyline::add(const Point & _point){
	Shape::add(_point);
}