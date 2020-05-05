#pragma once
using namespace std;
class Vector2D
{
private:
	double x, y;
public:
	Vector2D();
	Vector2D(double, double);
	Vector2D(double, double, double, double);
	Vector2D(const Vector2D &other);
	~Vector2D();
	void setx(double value);
	double getx();
	void sety(double value);
	double gety();
	Vector2D operator+(const Vector2D &) const;//сумма векторов
	Vector2D operator-(const Vector2D &) const;//разность векторов
	double operator*(const Vector2D &) const;//произведение векторов
	friend Vector2D operator*(Vector2D&, double);//умножение вектора на число
	friend Vector2D operator*(double, Vector2D&);//умножение числа на вектор
	Vector2D& operator++();//prefix инкремент
	Vector2D& operator--();//и декремент
	Vector2D operator++(int);//postfix инкремент
	Vector2D operator--(int);//и декремент
	Vector2D& operator+=(const Vector2D&);//присваивание суммы
	Vector2D& operator-=(const Vector2D&);//присваивание разности
	Vector2D& operator*=(double);//присваивание умножения на число
	operator string();
	double lenght();
	double angle(Vector2D);
	void print(void);
};