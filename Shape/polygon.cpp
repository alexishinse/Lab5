#include "stdafx.h"

using namespace ShapeLibrary;

Polygon::Polygon(IWindowAPI & _IWindowAPI)
	:ClosedPolyline(_IWindowAPI)
{

}

void Polygon::draw(){

	if (vecPoints.size() < 3) throw runtime_error("Le nombre minimal de point d'un closedPolyline doit être de 3 points.");

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

void Polygon::add(const Point & _point){

	if (isPointOnLine(_point)) throw runtime_error("Le point ne doit pas être ajouté sur la ligne du polygon.");
	ClosedPolyline::add(_point);
}

unsigned int Polygon::getVariationLine(const Point & _point1, const Point & _point2){
	return (_point2.y - _point1.y) / (_point2.x - _point1.x);
}

bool Polygon::isPointOnLine(const Point & _point){
	vector<Point>::iterator it;

	for (it = vecPoints.begin(); it != vecPoints.end(); it++){
		if (vecPoints.end() - 1 != it){
			if (getVariationLine(*it, *(it + 1)) == getVariationLine(_point, *(it + 1))) return true;
		}
		else{
			if (getVariationLine(*vecPoints.begin(), *it) == getVariationLine(_point, *it)) return true;
		}
	}
	return false;
}