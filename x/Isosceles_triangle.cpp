#include "Isosceles_triangle.h"
#define PI 3.14159265   

//����������� �� ���������
Isoscelec_triangle::Isoscelec_triangle() {
	side_a = 0;
	side_b = 0;
	base = 0;
	angle_a = 0;
	angle_b = 0;
	angle_c = 0;
}

//����������� ������������ ����� ������� ������� � ���� ����� ����
Isoscelec_triangle::Isoscelec_triangle(double a, double b, double ang_c) {
	side_a = a;
	side_b = b;	
	if (side_a != side_b)
		throw "error: Triangle does not meet the construction condition!\n";
	angle_c = ang_c;
	base = sqrt(side_a * side_a + side_b * side_b - 2 * side_a * side_b * cos(angle_c * PI / 180));
	angle_a = (180 - angle_c) / 2;
	angle_b = angle_a;

	if (angle_a + angle_b + angle_c < 0 || angle_a + angle_b + angle_c > 180)
		throw "error: Triangle sum of angles theorem!\n";
}

//������ ���������� �������������� ������������
void Isoscelec_triangle::print() {
	std::cout << "���������: " << std::fixed
		<< std::setprecision(1) << base;
	std::cout << "\n������� ������� a: " << std::fixed
		<< std::setprecision(1) << side_a;
	std::cout << "\n������� ������� b: " << std::fixed
		<< std::setprecision(1) << side_b;
	std::cout << "\n���� a: " << std::fixed
		<< std::setprecision(1) << angle_a;
	std::cout << "\n���� b: " << std::fixed
		<< std::setprecision(1) << angle_b;
	std::cout << "\n���� c: " << std::fixed
		<< std::setprecision(1) << angle_c;
	std::cout << "\n";
	std::cout << "\n�������� ������������: " << std::fixed
		<< std::setprecision(1) << perimeter();
	std::cout << "\n������� ������������: " << std::fixed
		<< std::setprecision(1) << square();
}

//���������� ���������
double Isoscelec_triangle::perimeter() {
	return side_a + side_b + base;
}

//���������� �������
double Isoscelec_triangle::square() {
	//������������
	double p = perimeter() / 2;
	return sqrt(p * (p - side_a) * (p - side_b) * (p - base));
}

//����������
Isoscelec_triangle::~Isoscelec_triangle() {
	side_a = 0;
	side_b = 0;
	base = 0;
	angle_a = 0;
	angle_b = 0;
	angle_c = 0;
}
