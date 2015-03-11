#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI & _IWindowAPI)
	:Shape(_IWindowAPI)
{

}

Rectangle::~Rectangle(){
}

void Rectangle::draw(){
	Shape::getIWindow().drawRectangle(*position, width, height);
	Shape::getIWindow().setDrawingColor(filledColor);
}

void Rectangle::setHeight(unsigned int _height){
	this->height = _height;
}

void Rectangle::setWidth(unsigned int _width){
	this->width = _width;
}

void Rectangle::setPosition(Point & _position){
	this->position = &_position;
}