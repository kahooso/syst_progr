#include <iostream>
#include <thread>
#include <iomanip>

void static_test();

template<typename T>
void dump_memory(const T& variable);

int main() {
	uint32_t uint_variable = 13;
	double_t double_variable = 1.718261826;
	float_t float_variable = 1.71826f;

	std::cout << "int variable dump" << std::endl;
	dump_memory(uint_variable);
	std::cout << "double variable dump" << std::endl;
	dump_memory(double_variable);
	std::cout << "float variable dump" << std::endl;
	dump_memory(float_variable);

	std::thread _thread(static_test);
	std::this_thread::sleep_for(std::chrono::seconds(1));

	_thread.join();

	return 0;
}

template <typename T>
void dump_memory(const T& variable) {
	std::cout << std::this_thread::get_id() << std::endl;
	const unsigned char* byte_ptr = reinterpret_cast<const unsigned char*>(&variable);
	for (size_t i = 0; i < sizeof(T); ++i) {
		std::cout << std::setw(2) << std::setfill('0') << std::hex
			<< static_cast<int>(byte_ptr[i]) << "\t";
	}
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << std::dec << std::endl;
}

void static_test() {
	std::cout << "\nstatic_test\t" << std::this_thread::get_id() << std::endl;
	int i = 54;
	double d = static_cast<double>(i); // int -> double
	std::cout << "after static_cast -> " << d << "\t|\t int -> double" << std::endl;
	double e = 1.718261826;
	int int_ptr = static_cast<int>(e);
	std::cout << "after static_cast -> " << int_ptr << "\t|\t double -> int" << std::endl;
	float f = 3.14f;
	int int_ptr_f = static_cast<int>(f);
	std::cout << "after static_cast -> " << int_ptr_f << "\t|\t float -> int" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
}

/*
static_cast

Может быть использован для приведения одного типа к другому. Если это
	встроенные типы, то будут использованы встроенные в C++ правила их приведения. Если
	это типы, определенные программистом, то будут использованы правила приведения,
	определенные программистом.

	static_cast между указателями корректно, только если один из указателей - это указатель
	на void или если это приведение между объектами классов, где один класс является
	наследником другого. То есть для приведения к какому-либо типу от void*, который
	возвращает malloc, следует использовать static_cast.
	int * p = static_cast<int*>(malloc(100));

Если приведение не удалось, возникнет ошибка на этапе компиляции. Однако, если
	это приведение между указателями на объекты классов вниз по иерархии и оно не
	удалось, результат операции undefined. То есть, возможно такое
	приведение: static_cast<Derived*>(pBase), даже если pBase не указывает наDerived, но
	программа при этом будет вести себя странно.
*/