#include "stdafx.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI & _IWindowAPI)
	:OpenPolyline(_IWindowAPI)
{

}

void ClosedPolyline::draw(){

	if (vecPoints.size() < 3) throw runtime_error("Le nombre minimal de point d'un closedPolyline doit être 2");
	OpenPolyline::draw();
	Shape::iWindowAPI->drawLine(*vecPoints.begin(), vecPoints.at(vecPoints.size() - 1));
}

void ClosedPolyline::add(const Point & _point){
	OpenPolyline::add(_point);
}