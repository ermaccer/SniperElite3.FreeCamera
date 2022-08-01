#pragma once
#include "Vector.h"
#include "Matrix.h"

struct Camera {
	Vector Position;
	Matrix Rotation;
};


Camera* GetCamera();