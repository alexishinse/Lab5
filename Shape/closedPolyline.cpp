#include "stdafx.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI & _IWindowAPI)
	:OpenPolyline(_IWindowAPI)
{

}

void ClosedPolyline::draw(){
	vector<Point>::iterator it;

	Shape::iWindowAPI->setDrawingColor(ShapeLibrary::Color::BLACK);

	if (vecPoints.size() < 2) throw runtime_error("Le nombre de point minimal doit etre de deux avant de dessiner.");

	for (it = vecPoints.begin(); it != vecPoints.end(); it++){
		if (vecPoints.end() - 1 != it){
			Shape::iWindowAPI->drawLine(*it, *(it + 1));
		}
		else{
			Shape::iWindowAPI->drawLine(*vecPoints.begin(), *it);
		}
	}
}

void ClosedPolyline::add(const Point & _point){
	OpenPolyline::add(_point);
}