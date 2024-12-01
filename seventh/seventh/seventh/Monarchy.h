#pragma once

#include "State.h"

class Monarchy : State
{
public:
	Monarchy(const std::string& name);

	void show() const override;

};