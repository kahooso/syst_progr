#pragma once
#ifndef _MY_STRING_H

#include "includes.h"

class MyString
{
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& other);
	~MyString();

	void set(const char* str);
	void update();
	void print() const;

private:

	char* str;
	size_t length;

};

#endif // !_MY_STRING_H




