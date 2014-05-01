#ifndef __ACCELERATION__
#define __ACCELERATION__
#include "Vector3.inl"
template<class T>
class Acceleration : public Vector3<T>
{
public:
	Acceleration()
	{
		memset(a, 0, 3 * sizeof(a[0]));
	}
	Acceleration(T& ax, T& ay, T& az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Acceleration(T ax, T ay, T az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Acceleration(Vector3<T> &r)
	{
		a[0] = r.GetX();
		a[1] = r.GetY();
		a[2] = r.GetZ();
	}
};
typedef Acceleration<double> Accelerationd;
typedef Acceleration<float> Accelerationf;
typedef Acceleration<int> Accelerationi;

#endif //__ACCELERATION__