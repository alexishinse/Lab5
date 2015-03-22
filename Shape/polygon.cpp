#include "stdafx.h"

using namespace ShapeLibrary;

Polygon::Polygon(IWindowAPI & _IWindowAPI)
	:ClosedPolyline(_IWindowAPI)
{

}

void Polygon::draw(){
	ClosedPolyline::draw();
}

void Polygon::add(const Point & _point){

	if (isPointOnLine(_point)) throw runtime_error("Le point ne doit pas être ajouté sur la ligne du polygon.");
	if (isLineCrossingAnother(_point)) throw runtime_error("La nouvelle ligne d'un polygon ne peut entre croiser une autre.");
	ClosedPolyline::add(_point);
}

double Polygon::getVariationLine(const Point & _point1, const Point & _point2){
	if (_point2.x == _point1.x)return NULL;
    return (_point2.y - _point1.y) / (_point2.x - _point1.x);
}

bool Polygon::isPointOnLine(const Point & _point){
	vector<Point>::iterator it;

	for (it = vecPoints.begin(); it != vecPoints.end(); it++){
		if (vecPoints.size() > 1){
			if (vecPoints.end() - 1 != it){
				double x = getVariationLine(*it, *(it + 1));
				double y = getVariationLine(_point, *(it + 1));
				if (getVariationLine(*it, *(it + 1)) == getVariationLine(_point, *(it + 1)))return true;
			}
		}
	}
	return false;
}

bool Polygon::isLineCrossingAnother(const Point & _point){
	vector<Point>::iterator it;

	double minX;
	double maxX;
	if (vecPoints.size() != 0){
		if (vecPoints.back().x < _point.x){
			minX = vecPoints.back().x;
			maxX = _point.x;
		}
		else{
			minX = _point.x;
			maxX = vecPoints.back().x;
		}

		for (it = vecPoints.begin(); it != vecPoints.end(); it++){
			if (vecPoints.size() > 1){
				if (vecPoints.end() - 1 != it){
					double lineVar1 = getVariationLine(*it, *(it + 1));
					double lineVar2 = getVariationLine(vecPoints.back(), _point);
					double varDifference = lineVar1 - lineVar2;
					double pointRencontreX = varDifference / ((*it).y - vecPoints.back().y);
					//double pointRencontreX = ((*it).y - vecPoints.back().y) / (getVariationLine(*it, *(it + 1)) - getVariationLine(vecPoints.back(), _point));
					if (pointRencontreX > minX && pointRencontreX < maxX) return true;
				}
			}
		}
	}
	return false;
}