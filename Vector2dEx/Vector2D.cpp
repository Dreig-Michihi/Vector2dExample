#include <iostream>
#include "Vector2D.h"
#include <math.h>
using namespace std;


Vector2D::Vector2D() {
	this->x = 0;
	this->y = 0;
}
Vector2D::Vector2D(double x, double y) {
	this->x = x;
	this->y = y;
}
Vector2D::Vector2D(double xEnd, double yEnd, double xStart, double yStart) {
	this->x = xEnd - xStart;
	this->y = yEnd - yStart;
}
Vector2D::Vector2D(const Vector2D &other) {
	this->x = other.x;
	this->y = other.y;
}
Vector2D::~Vector2D() {
}
void Vector2D::setx(double x) {
	this->x = x;
}
double Vector2D::getx() {
	return this->x;
}
void Vector2D::sety(double y) {
	this->y = y;
}
double Vector2D::gety() {
	return this->y;
}
Vector2D Vector2D::sum(Vector2D other) {
	Vector2D temp(this->x,this->y);
	temp.x += other.x;
	temp.y += other.y;
	return temp;
}
Vector2D Vector2D::sub(Vector2D other) {
	Vector2D temp(this->x, this->y);
	temp.x -= other.x;
	temp.y -= other.y;
	return temp;
}
Vector2D Vector2D::mult(double other) {
	Vector2D temp(this->x, this->y);
	temp.x *= other;
	temp.y *= other;
	return temp;
}
double Vector2D::lenght() {
	//formula dlina vectora
	return sqrt(pow(this->x,2)+pow(this->y,2));//корень из суммы квадратов координат вектора
}
double Vector2D::angle(Vector2D other) {
	if (!((this->x == 0 && this->y == 0) || (other.x == 0 && other.y == 0)))
		return acos(((this->x*other.x) + (this->y*other.y)) / (this->lenght()*other.lenght()));
	else
		return 0;
}
double Vector2D::scalarMult(Vector2D other) {
	return this->lenght()*other.lenght()*cos(this->angle(other));
}
void Vector2D::print() {
	cout << "X= " << this->x << ", Y= " << this->y << endl;
}




/*
	Vector2D();
	Vector2D(double, double);
	Vector2D(double, double, double, double);
	Vector2D(const Vector2D &other);
	~Vector2D();
	void setx(double value);
	double getx();
	void sety(double value);
	double gety();
	void sum(Vector2D);
	void sub(Vector2D);
	void mult(double);
	double lenght(Vector2D);
	double scalarMult(Vector2D);
	void print(void);
	*/