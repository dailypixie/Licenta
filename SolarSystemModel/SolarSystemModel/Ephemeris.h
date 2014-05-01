#ifndef __EPHEMERIS__
#define __EPHEMERIS__
#include "Object.h"
#include "Vector3.inl"
namespace Ephemeris
{
	Object SimpleObject1(10000, Positiond::Zero(), Velocityd::Zero());
	Object SimpleObject2(1, Positiond(2.0,1.0,0.0), Velocityd::Zero());
}

#endif //__EPHEMERIS__