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

1. Для чего в С++ применяется перегрузка операций
2. Истинно ли следующее утверждение: операция >= может быть перегружена?
3. Сколько аргументов требуется для определения перегруженной унарной операции?
4. Сколько аргументов требуется для определения перегруженной бинарной
операции?
5. Чем отличается действие операции ++ в префиксной форме от её действия в
постфиксной форме?
6. Истинно ли следующее утверждение: перегруженная операция всегда требует на
один аргумент меньше, чем количество операндов?
7. Когда перегружается операция арифметического присваивания, то результат
a. Передается объекту справа от операции
b. Передается объекту слева от операции
c. Передается объекту, вызвавшему операцию
d. Должен быть возвращен
8. Истинно ли следующее утверждение: компилятор не выдаст сообщение об
ошибке, если вы перегрузите операцию * для выполнения деления?
9. Существуют ли операции, которые нельзя перегружать?

*/