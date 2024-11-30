#pragma once

#include <stdexcept>
#include <iostream>
#include <algorithm>

class Ring
{
public:
	Ring(double r1, double r2);
	Ring();
	Ring(const Ring& other);

	static int32_t getCount();

	Ring& operator= (const Ring& other);
	Ring operator* (const Ring& other) const;
	Ring operator+ (const Ring& other) const;
	Ring operator- (const Ring& other) const;

	virtual ~Ring();

	void display() const;

private:
	double R1;
	double R2;
	static uint32_t counter;
	const uint32_t id = counter;
};