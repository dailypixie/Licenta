#ifndef __NATURE__
#define __NATURE__
#include "Object.h"
#include "Vector3.inl"
#include "Force.h"
#ifndef NULL
#define NULL 0
#endif // !NULL

namespace Nature
{
	const double G = 6.674 / 100000000000; // 10^11
	extern void GetAttractionForce(const Object const *a_obj1, const Object const *a_obj2, Forced *forceVector);
};

#endif //__NATURE__