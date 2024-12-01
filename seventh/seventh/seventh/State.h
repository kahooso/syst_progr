#pragma once

#include <string>
#include <iostream>

class State
{
public:
	State(const std::string& name);
	virtual ~State();

	static void print();
	void remove();
	void add();
	virtual void show() const = 0;

	State* next;

protected:
	std::string name;
	static State* _root;

};