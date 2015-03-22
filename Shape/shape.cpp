#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(IWindowAPI & _IWindowAPI){
	this->iWindowAPI = &_IWindowAPI;
}

Shape::~Shape(){
}

void Shape::add(const Point & _point){
	vecPoints.push_back(_point);
}

const Point & Shape::getPoint(int _index){
	return vecPoints.at(_index);
}

void Shape::draw(){
}

void Shape::SetFilledShapeColor(){
	this->iWindowAPI->setDrawingColor(filledColor);
}

void Shape::SetShapeColor(){
	this->iWindowAPI->setDrawingColor(drawColor);
}

