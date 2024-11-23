#pragma once

#ifndef _RING_H_

#include <stdexcept>
#include <iostream>
#include <algorithm>

class Ring
{
public:
	Ring(double r1, double r2);
	Ring();
	Ring(const Ring& other);

	Ring& operator= (const Ring& other);
	Ring operator* (const Ring& other) const;
	Ring operator+ (const Ring& other) const;
	Ring operator- (const Ring& other) const;

	~Ring();

	void display() const;

private:
	double R1;
	double R2;

};

#endif