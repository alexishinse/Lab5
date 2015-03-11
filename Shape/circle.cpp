#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI & _IWindowAPI)
	:Shape(_IWindowAPI)
{

}

Circle::~Circle(){
}

void Circle::draw(){
	if (positionCenter == NULL) throw runtime_error("Le cercle doit possèder une position pour pouvoir être dessiner.");

		Shape::getIWindow().fillCircle(*positionCenter, radius);
		Shape::getIWindow().setDrawingColor(drawColor);
		Shape::getIWindow().drawCircle(*positionCenter, radius);

}

void Circle::setLineColor(Color::COLOR_TYPE _color){
	this->drawColor = _color;
}


void Circle::setFillColor(Color::COLOR_TYPE _color){
	this->filledColor = _color;
}

void Circle::setCenter(Point & _position){
	this->positionCenter = &_position;
}

void Circle::setRadius(int _radius){
	if (_radius < 0) throw invalid_argument("Le rayon doit être supérieur à -1.");
	this->radius = _radius;
}