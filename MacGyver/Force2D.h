#pragma once
#include "Vector3.h"

namespace Macgyver::Math {
	class Force2D : public Vector3 {
	public:
		Force2D(int x = 0, int y = 0);
	};
}