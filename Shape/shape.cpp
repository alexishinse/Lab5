#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(IWindowAPI & _IWindowAPI){
	this->iWindowAPI = &_IWindowAPI;
}

const IWindowAPI & Shape::getIWindow(){
	return *iWindowAPI;
}

void Shape::add(const Point & _point){
	vecPoints.push_back(_point);
}

void Shape::draw(const string & _typeDessin){
	vector<Point>::iterator it;
	if (_typeDessin == "OPEN_POLYLINE")
	{
		if (vecPoints.size() < 2) throw runtime_error("Le nombre de point minimal doit etre de deux avant de dessiner.");

		for (it = vecPoints.begin(); it != vecPoints.end(); it++){
			if (vecPoints.end() - 1 != it){
				iWindowAPI->drawLine(*it, *(it + 1));
			}
		}
	}
	iWindowAPI->setDrawingColor(ShapeLibrary::Color::BLACK);
}