#include "Stright_prism.h"

//����������� � ���������� ��� ������, ��������� �����-��� � ��������� � ������ ������
Stright_prism::Stright_prism(Isoscelec_triangle triangle, double h) {
	height = h;
	side_a = triangle.get_side_a();
	side_b = triangle.get_side_b();
	base = triangle.get_base();
	angle_a = triangle.get_angle_a();
	angle_b= triangle.get_angle_b();
	angle_c = triangle.get_angle_c();
}

//���������� ������� ���-�� ������
double Stright_prism::square() {
	double s_bok = Isoscelec_triangle::perimeter() * height;
	return s_bok + (2 * 0.5 * side_a * side_b);;
}

//���������� ������ ������
double Stright_prism::volume() {
	return Isoscelec_triangle::square() * height;
}

//����� ���������� ������
void Stright_prism::print() {
	std::cout << "\n\n����������� � ���������:\n";
	Isoscelec_triangle::print();
	std::cout << "\n";
	std::cout << "\n������ ������: " << std::fixed
		<< std::setprecision(1) << height;
	std::cout << "\n������� ���-�� ������: " << square();
	std::cout << "\n����� ������: " << volume();
}

//����������
Stright_prism::~Stright_prism() {
	side_a = 0;
	side_b = 0;
	base = 0;
	angle_a = 0;
	angle_b = 0;
	angle_c = 0;
	height = 0;
}