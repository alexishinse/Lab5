#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI & _IWindowAPI)
	:Shape(_IWindowAPI)
{

}

Rectangle::~Rectangle(){
}

void Rectangle::setFillColor(Color::COLOR_TYPE _color){
	Shape::setFilledColor(_color);
}

void Rectangle::setLineColor(Color::COLOR_TYPE _color){
	Shape::setDrawColor(_color);
}

void Rectangle::draw(){
	if (position == NULL) throw runtime_error("La position doit être spécifié avant de dessiner le rectangle");

	Shape::draw();
	Shape::getIWindow().fillRectangle(*position, width, height);
	Shape::getIWindow().drawRectangle(*position, width, height);
}

void Rectangle::setHeight(int _height){
	if (_height < 0) throw invalid_argument("La hauteur doit être supérieur à -1");
	this->height = _height;
}

void Rectangle::setWidth(int _width){
	if (_width < 0) throw invalid_argument("La largeur doit être supérieur à -1");
	this->width = _width;
}

void Rectangle::setPosition(Point & _position){
	this->position = &_position;
}