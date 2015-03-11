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


