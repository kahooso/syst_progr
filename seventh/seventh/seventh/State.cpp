#include "State.h"

State* State::_root = nullptr;

State::State(const std::string& name) : name(name) {
	
	add();
}

State::~State() {

	remove();
}

void State::add() {
	
	next = _root;
	_root = this;
}

void State::remove() {

	State* temp = _root;
	State* prev = nullptr;

	while (temp != nullptr) {
		
		if (temp == this) {

			if (prev != nullptr) {

				prev->next = temp->next;
			}
			else {

				_root = temp->next;
			}
		}
		prev = temp;
		temp = temp->next;
	}
}

void State::print() {

	State* temp = _root;

	while (temp != nullptr) {

		temp->show();
		temp = temp->next;
	}
}

State* next = nullptr;