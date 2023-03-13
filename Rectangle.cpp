#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle() {
	this->length = 1.0;
	this->width = 1.0;
}

Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}

void Rectangle::setLength(double length) {
	this->length = length;
}
void Rectangle::setWidth(double width) {
	this->width = width;
}
double Rectangle::getLength() {
	return this->length;
}
double Rectangle::getWidth() {
	return this->width;
}
double Rectangle::area() {
	return length * width;
}
double Rectangle::perimeter() {
	return length * 2 + width * 2;
}


