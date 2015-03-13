#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI & _IWindowAPI)
	:Shape(_IWindowAPI)
{

}

OpenPolyline::~OpenPolyline(){
	vecPoints.clear();
}

void OpenPolyline::draw(){
	vector<Point>::iterator it;

	Shape::iWindowAPI->setDrawingColor(ShapeLibrary::Color::BLACK);

	if (vecPoints.size() < 2) throw runtime_error("Le nombre de point minimal doit etre de deux avant de dessiner.");

	for (it = vecPoints.begin(); it != vecPoints.end(); it++){
		if (vecPoints.end() - 1 != it){
			Shape::iWindowAPI->drawLine(*it, *(it + 1));
		}
	}
}

void OpenPolyline::add(const Point & _point){
	Shape::add(_point);
}