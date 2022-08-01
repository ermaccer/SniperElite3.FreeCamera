#pragma once
#include "Vector.h"

class Matrix {
public:
	char pad[84];
	Vector forward;

	Vector GetForward();
	Vector GetUp();
	Vector GetRight();
};