#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point(double _x, double _y) :
    x(_x), 
	y(_y)
{	
	if (_x < 0 || _y < 0) throw invalid_argument("La valeur des paramètres doit être supérieur à 0.");
}

bool Point::operator == (const Point & point) const
{
	if (this->x != point.x) return false;
	if (this->y != point.y) return false;
	return true;
}

bool Point::operator != (const Point & point) const
{
	if (*this == point) return false;
	return true; 
}
