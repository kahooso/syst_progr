#ifndef _SOLUTION_H_

#pragma once
#include <cstdint>
#include <iostream>

class Solution
{
public:

	static uint32_t getCounter();
	uint32_t getId() const; // const

	void printId() const;

	Solution(uint32_t);
	~Solution();

private:

	const uint32_t id; // const 
	static uint32_t counter; // static
};

#endif // !_SOLUTION_H_