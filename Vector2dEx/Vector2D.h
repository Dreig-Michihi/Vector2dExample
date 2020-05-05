#pragma once
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
	Vector2D sum(Vector2D);
	Vector2D sub(Vector2D);
	Vector2D mult(double);
	double lenght();
	double angle(Vector2D);
	double scalarMult(Vector2D);
	void print(void);
};