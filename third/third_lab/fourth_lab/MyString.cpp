#include "MyString.h"

MyString::MyString() : str(nullptr), length(0) {}

MyString::MyString(const char* str) {

	if (str) {

		this->length = strlen(str);
		this->str = new char[this->length + 1];

		strcpy_s(this->str, length + 1, str);
	}
	else {

		this->str = nullptr;
		this->length = 0;
	}
}

MyString::MyString(const MyString& other) {

	if (str) {

		this->length = other.length;
		this->str = new char[this->length + 1];

		strcpy_s(this->str, this->length + 1, other.str);
	}
	else {

		this->str = nullptr;
		this->length = 0;
	}
}

MyString::~MyString() {

	std::cout << "\n\n\n...\ndestroyed." << std::endl;
	delete[] str;
}

void MyString::set(const char* str) {

	if (this->str == str)
		return;

	delete[] this->str;

	if (str) {

		this->length = strlen(str);
		this->str = new char[length + 1];
		strcpy_s(this->str, length + 1, str);
	}
	else {

		this->str = nullptr;
		length = 0;
	}
}

void MyString::print() const {

	if (str) {

		std::cout << "body -> " << this->str
			<< "\t|\tlength -> " << this->length << std::endl;
	}
	else {

		std::cout << "string is empty." << std::endl;
	}
}

void MyString::update() {

	const char TARGET_SYMBOL = '(';

	if (this->length > 12) {

		char* target_symbol = strchr(str, '(');

		if (target_symbol) {

			target_symbol++;

			size_t new_length = strlen(target_symbol);
			char* new_str = new char[new_length + 1];

			strcpy_s(new_str, new_length + 1, target_symbol);

			delete[] this->str;
			this->str = new_str;
			this->length = new_length;
		}

		std::ofstream out("C:\\Users\\ryche\\Desktop\\output.txt", std::ios::app);

		if (!out) {

			std::cerr << "Ошибка открытия файла для записи!" << std::endl;
			return;
		}

		out << str << std::endl;
		out.close();
	}
	else {

		return;
	}
}