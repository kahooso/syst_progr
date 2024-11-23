#include "Ring.h"

Ring::Ring(double r1, double r2) {

	if (r1 <= 0 || r2 <= 0 || r2 <= r1) {

		throw std::invalid_argument("invalid argument exception.");
	}

	this->R1 = r1;
	this->R2 = r2;
}

Ring::Ring() : R1(1), R2(2) {}

Ring::Ring(const Ring& other) : R1(other.R1), R2(other.R2) {}

Ring& Ring::operator= (const Ring& other) {

	if (this == &other) 
		return *this;

	R1 = other.R1;
	R2 = other.R2;
	
	return *this;
}

Ring Ring::operator* (const Ring& other) const {

	double newR1 = std::max(R1, other.R1);
	double newR2 = std::min(R2, other.R2);

	if (newR1 >= newR2) {

		throw std::logic_error("logic error exception (R1 >= R2).");
	}
}

Ring Ring::operator+ (const Ring& other) const {

	double newR1 = std::min(R1, other.R1);
	double newR2 = std::max(R2, other.R2);

	return Ring(newR1, newR2);
}

Ring Ring::operator- (const Ring& other) const {

	double newR1 = R1;
	double newR2 = std::max(R2, other.R1);

	if (newR2 <= newR1) {

		throw std::logic_error("logic error exception (R1 >= R2).");
	}

	return Ring(newR1, newR2);
}

void Ring::display() const {

	if (this) {

		std::cout << "Ring: Inner radius (R1) -> " << this->R1 <<
			", outher raduis (R2) -> " << this->R2 << std::endl;
	}
	else return;
}

Ring::~Ring() {} 

/*

1. ��� ���� � �++ ����������� ���������� ��������
2. ������� �� ��������� �����������: �������� >= ����� ���� �����������?
3. ������� ���������� ��������� ��� ����������� ������������� ������� ��������?
4. ������� ���������� ��������� ��� ����������� ������������� ��������
��������?
5. ��� ���������� �������� �������� ++ � ���������� ����� �� � �������� �
����������� �����?
6. ������� �� ��������� �����������: ������������� �������� ������ ������� ��
���� �������� ������, ��� ���������� ���������?
7. ����� ������������� �������� ��������������� ������������, �� ���������
a. ���������� ������� ������ �� ��������
b. ���������� ������� ����� �� ��������
c. ���������� �������, ���������� ��������
d. ������ ���� ���������
8. ������� �� ��������� �����������: ���������� �� ������ ��������� ��
������, ���� �� ����������� �������� * ��� ���������� �������?
9. ���������� �� ��������, ������� ������ �����������?

*/