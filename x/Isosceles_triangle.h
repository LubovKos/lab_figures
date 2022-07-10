#ifndef ISOSCELES_TRIANGLE 
#define ISOSCELES_TRIANGLE 

#include "Figure.h"

//������������� �����������
class Isoscelec_triangle : public Figure {
public:
	//����������� �� ���������
	Isoscelec_triangle();

	//����������� ������������ ����� ��� ������
	Isoscelec_triangle(double a, double b, double ang_c);

	//������ ���������� �������������� ������������
	void print() override;

	//���������� ���������
	double perimeter();

	//���������� �������
	double square();

	//����������
	~Isoscelec_triangle();

	//�������
	double get_side_a() { return side_a; }
	double get_side_b() { return side_b; }
	double get_base() { return base; }
	double get_angle_a() { return angle_a; }
	double get_angle_b() { return angle_b; }
	double get_angle_c() { return angle_c; }
protected:
	//�������
	double side_a;
	double side_b;
	double base;
	//����
	double angle_a;
	double angle_b;
	double angle_c;
};

#endif // RIGHT_TRIANGLE
