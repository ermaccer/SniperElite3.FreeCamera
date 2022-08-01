#include "Matrix.h"

Vector Matrix::GetForward()
{
	return forward;
}

Vector Matrix::GetUp()
{
	Vector fwd = forward;
	fwd.Normalise();
	Vector up = CrossProduct(fwd, Vector(0, 0, 1));
	return up;
}

Vector Matrix::GetRight()
{
	Vector fwd = forward;
	fwd.Normalise();
	Vector right = CrossProduct(fwd, Vector(0, 1, 0));
	return right;
}
