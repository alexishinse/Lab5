#include  "stdafx.h"

using namespace WindowRender;
using namespace ShapeLibrary;

WindowsRender::WindowsRender(IWindowAPI & _IWindowAPI){
	this->iWindowAPI = &_IWindowAPI;
}

WindowsRender::~WindowsRender(){
	vector<Shape*>::iterator it;
	for (it = vecShapes.begin(); it != vecShapes.end(); it++){
		delete &it;
	}
}

void WindowsRender::attach(Shape  &_shape){
	this->vecShapes.push_back(&_shape);
}

void WindowsRender::render(){
	bool quit = false;
	while (!quit){

		if (iWindowAPI->hasEvent()){
			IWindowEvent* iWindowEvent;
			iWindowEvent = &iWindowAPI->getEvent();

			if (iWindowEvent->getEventType() == ShapeLibrary::QUIT){
				quit = true;
			}
			delete iWindowEvent;
		}
		iWindowAPI->clearScreen();

		vector<Shape*>::iterator it;
		for (it = vecShapes.begin(); it != vecShapes.end(); it++){
			(*it)->draw();
		}
		iWindowAPI->displayScreen();
		iWindowAPI->wait(1000);
	}
}

void WindowsRender::putOnTop(Shape & _shape){
	//vector<Shape>::iterator it;
	//for (it = vecShapes.begin(); it != vecShapes.end(); it++){
	//	if ((*it) == _shape){
	//		vecShapes.erase(it);
	//		vecShapes.push_back(_shape);
	//	}
	//}
}