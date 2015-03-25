#include "stdafx.h"

using namespace ShapeLibrary;

ShapeFactory::ShapeFactory(IWindowAPI & _iWindowAPI){
	this->iWindowAPI = &_iWindowAPI;
}

OpenPolyline & ShapeFactory::createOpenPolyLine(){
	OpenPolyline* openPolyline = new OpenPolyline(*iWindowAPI);
	return *openPolyline;
}

ClosedPolyline & ShapeFactory::createClosedPolyLine(){
	ClosedPolyline* closedPolyline = new ClosedPolyline(*iWindowAPI);
	return *closedPolyline;
}

Polygon & ShapeFactory::createPolygone(){
	Polygon* polygon = new Polygon(*iWindowAPI);
	return *polygon;
}

Circle & ShapeFactory::createCircle(const Point & _point, int _radius){
	Circle* circle = new Circle(*iWindowAPI);
	circle->setCenter(_point);
	circle->setRadius(_radius);
	return *circle;
}

Rectangle & ShapeFactory::createRectangle(const Point & _point, int _width, int _height){
	Rectangle* rectangle = new Rectangle(*iWindowAPI);
	rectangle->setPosition(_point);
	rectangle->setHeight(_height);
	rectangle->setWidth(_width);
	return *rectangle;
}