#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
	public:
		Rectangle();
		Rectangle(double length, double width);
		void setLength(double length);
		void setWidth(double width);
		double getLength();
		double getWidth();
		double area();
		double perimeter();
		

	private:
		double length;
		double width;

};





#endif // !RECTANGLE_H

