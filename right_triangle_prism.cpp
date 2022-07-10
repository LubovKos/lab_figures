#include "right_triangle_prism.h"

//����������� � ���������� ��� ������, ��������� �����-��� � ��������� � ������ ������
right_triangle_prism::right_triangle_prism(right_triangle triangle, double h) {
	height = h;
	leg_a = triangle.get_leg_a();
	leg_b = triangle.get_leg_b();
	hypotenuse = triangle.get_hypotenuse();
	angle_a = triangle.get_angle_a();
	angle_b= triangle.get_angle_b();
	angle_c = triangle.get_angle_c();
}

//���������� ������� ���-�� ������
double right_triangle_prism::square() {
	double s_bok = right_triangle::perimeter() * height;
	return s_bok + (2 * 0.5 * leg_a * leg_b);;
}

//���������� ������ ������
double right_triangle_prism::volume() {
	return right_triangle::square() * height;
}

//����� ���������� ������
void right_triangle_prism::print() {
	std::cout << "\n\n����������� � ���������:\n";
	/*std::cout << "\n����������: " << std::fixed
		<< std::setprecision(3) << hypotenuse;
	std::cout << "\n������ ����� 'a': " << std::fixed
		<< std::setprecision(3) << leg_a;
	std::cout << "\n������ ����� 'b': " << std::fixed
		<< std::setprecision(3) << leg_b;
	std::cout << "\n���� 'c': " << std::fixed
		<< std::setprecision(3) << angle_c;
	std::cout << "\n���� 'a': " << std::fixed
		<< std::setprecision(3) << angle_a;
	std::cout << "\n���� 'b': " << std::fixed
		<< std::setprecision(3) << angle_b;*/
	right_triangle::print();
	std::cout << "\n";
	std::cout << "\n������ ������: " << std::fixed
		<< std::setprecision(3) << height;
	std::cout << "\n������� ���-�� ������: " << square();
	std::cout << "\n����� ������: " << volume();
}

//����������
right_triangle_prism::~right_triangle_prism() {
	leg_a = 0;
	leg_b = 0;
	hypotenuse = 0;
	angle_a = 0;
	angle_b = 0;
	angle_c = 0;
	height = 0;
}