#include <iostream>
#include "Vector2D.h"
#include <math.h>
#include <string>
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
/*//Vector2D Vector2D::sum(Vector2D other) {
//	Vector2D temp(this->x,this->y);
//	temp.x += other.x;
//	temp.y += other.y;
//	return temp;
//}
//Vector2D Vector2D::sub(Vector2D other) {
//	Vector2D temp(this->x, this->y);
//	temp.x -= other.x;
//	temp.y -= other.y;
//	return temp;
//}
//Vector2D Vector2D::mult(double other) {
//	Vector2D temp(this->x, this->y);
//	temp.x *= other;
//	temp.y *= other;
//	return temp;
//}
//double Vector2D::scalarMult(Vector2D other) {
//	return this->lenght()*other.lenght()*cos(this->angle(other));
//}*/
Vector2D Vector2D::operator+(const Vector2D& vector) const {
	return Vector2D(this->x + vector.x, this->y + vector.y);
}
Vector2D Vector2D::operator-(const Vector2D& vector) const {
	return Vector2D(this->x - vector.x, this->y - vector.y);
}
Vector2D operator*(Vector2D& vector, double num) {
	return Vector2D(vector.x*num, vector.y*num);
}
Vector2D operator*(double num, Vector2D& vector) {
	return vector*num;
}
double Vector2D::operator*(const Vector2D& vector) const {
	/*Vector2D temp(this->x, this->y);
	//Vector2D temp2(vector.x, vector.y);
	//return (temp.lenght()*temp2.lenght()*cos(temp.angle(temp2)));
	//можно получить скалярное произведение векторов гораздо проще: попарным произведением координат!*/
	return this->x*vector.x + this->y * vector.y;
}
Vector2D& Vector2D::operator++() {
	this->x++;
	this->y++;
	return *this;
}
Vector2D Vector2D::operator++(int) {
	Vector2D temp(this->x, this->y);
	temp.x++;
	temp.y++;
	return temp;
}
Vector2D& Vector2D::operator--() {
	this->x--;
	this->y--;
	return *this;
}
Vector2D Vector2D::operator--(int) {
	Vector2D temp(this->x, this->y);
	temp.x--;
	temp.y--;
	return temp;
}
Vector2D& Vector2D::operator+=(const Vector2D& vector) {
	this->x += vector.x;
	this->y += vector.y;
	return *this;
}
Vector2D& Vector2D::operator-=(const Vector2D& vector) {
	this->x -= vector.x;
	this->y -= vector.y;
	return *this;
}
Vector2D& Vector2D::operator*=(double num) {
	this->x *= num;
	this->y *= num;
	return *this;
}
Vector2D::operator string() {
	//string s = "(" + to_string(this->x) + "; " + to_string(this->y) + ")";
	return ("(" + to_string(this->x) + "; " + to_string(this->y) + ")");
}
double Vector2D::lenght() {
	return sqrt(pow(this->x,2)+pow(this->y,2));//корень из суммы квадратов координат вектора
}
double Vector2D::angle(Vector2D other) {
	if (!((this->x == 0 && this->y == 0) || (other.x == 0 && other.y == 0)))
		return acos(((this->x*other.x) + (this->y*other.y)) / (this->lenght()*other.lenght()));
	else
		return 0;
}
