#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI & _IWindowAPI)
	:Shape(_IWindowAPI)
{

}

Circle::~Circle(){
}

void Circle::draw(){
	if (Shape::vecPoints.size() == NULL) throw runtime_error("Le cercle doit possèder une position pour pouvoir être dessiner.");

	drawFilledCircle();
	drawCircle();

}

void Circle::setFillColor(Color::COLOR_TYPE _color){
	Shape::filledColor = _color;
}

void Circle::setLineColor(Color::COLOR_TYPE _color){
	Shape::drawColor = _color;
}

void Circle::setCenter(const Point & _position){
	Shape::add(_position);
}

void Circle::setRadius(int _radius){
	if (_radius < 0) throw invalid_argument("Le rayon doit être supérieur à -1.");
	this->radius = _radius;
}

void Circle::drawFilledCircle(){
	Shape::SetFilledShapeColor();
	Shape::iWindowAPI->fillCircle(*Shape::vecPoints.begin(), radius);
}

void Circle::drawCircle(){
	Shape::SetShapeColor();
	Shape::iWindowAPI->drawCircle(*Shape::vecPoints.begin(), radius);
}