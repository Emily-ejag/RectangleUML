#include <iostream>
#include "Rectangle.h"

using namespace std;

void printRectangle(Rectangle r);

int main() {
	Rectangle r1;
	Rectangle r2(4.0, 5.0);

	printRectangle(r1);
	printRectangle(r2);

	r1.setLength(22);
	r1.setWidth(12);

	printRectangle(r1);

	return 0;
}

void printRectangle(Rectangle r) {
	cout << "the area of the retangle is " << r.area() << endl;
	cout << "the perimeter of the retangle is " << r.perimeter() << endl;
}