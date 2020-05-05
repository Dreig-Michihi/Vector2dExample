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
	Vector2D operator+(const Vector2D &) const;//����� ��������
	Vector2D operator-(const Vector2D &) const;//�������� ��������
	double operator*(const Vector2D &) const;//������������ ��������
	friend Vector2D operator*(Vector2D&, double);//��������� ������� �� �����
	friend Vector2D operator*(double, Vector2D&);//��������� ����� �� ������
	Vector2D& operator++();//prefix ���������
	Vector2D& operator--();//� ���������
	Vector2D operator++(int);//postfix ���������
	Vector2D operator--(int);//� ���������
	Vector2D& operator+=(const Vector2D&);//������������ �����
	Vector2D& operator-=(const Vector2D&);//������������ ��������
	Vector2D& operator*=(double);//������������ ��������� �� �����
	operator string();
	double lenght();
	double angle(Vector2D);
	void print(void);
};