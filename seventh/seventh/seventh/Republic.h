#pragma once

#include "State.h"

class Republic : public State
{
public:
	Republic(const std::string& name);

	void show() const override;

};