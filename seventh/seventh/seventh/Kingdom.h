#pragma once

#include "State.h"

class Kingdom : State
{
public:
	Kingdom(const std::string& name);

	void show() const override;

};