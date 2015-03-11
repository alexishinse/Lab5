#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(IWindowAPI & _IWindowAPI){
	this->iWindowAPI = &_IWindowAPI;
}

Shape::~Shape(){
}

IWindowAPI & Shape::getIWindow(){
	return *iWindowAPI;
}

void Shape::setFilledColor(Color::COLOR_TYPE _color){
	this->filledColor = _color;
}

void Shape::setDrawColor(Color::COLOR_TYPE _color){
	this->drawColor = _color;
}

void Shape::draw(){
	this->iWindowAPI->setDrawingColor(drawColor);
}

