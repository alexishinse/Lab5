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

	if (vecPoints.size() < 2) throw runtime_error("Le nombre de point minimal doit etre de deux avant de dessiner.");

	for (it = vecPoints.begin(); it != vecPoints.end(); it++){
		if (vecPoints.end() - 1 != it){
			Shape::getIWindow().drawLine(*it, *(it + 1));
		}
	}
	Shape::getIWindow().setDrawingColor(ShapeLibrary::Color::BLACK);
}

void OpenPolyline::add(const Point & _point){
	vecPoints.push_back(_point);
}