#ifndef STRIGHT_PRISM
#define STRIGHT_PRISM
#include "Isosceles_triangle.h"

class Stright_prism : public Isoscelec_triangle {
public:
	//����������� � ���������� ��� ������, ��������� �����-��� � ��������� � ������ ������
	Stright_prism(Isoscelec_triangle triangle, double h);

	//���������� ������� ���-�� ������
	double square();
	
	//���������� ������ ������
	double volume();

	//����� ���������� ������
	void print() override;

	//����������
	~Stright_prism();
private:
	double height;
};

#endif // RIGHT_TRIANGLE_PRISM

