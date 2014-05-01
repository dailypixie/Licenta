#ifndef __VELOCITY__
#define __VELOCITY__
#include "Vector3.inl"
template<class T>
class Velocity : public Vector3<T>
{
public:
	Velocity()
	{
		memset(a, 0, 3 * sizeof(a[0]));
	}
	Velocity(T& ax, T& ay, T& az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Velocity(T ax, T ay, T az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Velocity(Vector3<T> &r)
	{
		a[0] = r.GetX();
		a[1] = r.GetY();
		a[2] = r.GetZ();
	}
};
typedef Velocity<double> Velocityd;
typedef Velocity<float> Velocityf;
typedef Velocity<int> Velocityi;
#endif //__VELOCITY__