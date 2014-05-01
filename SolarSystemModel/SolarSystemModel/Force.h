#ifndef __FORCE__
#define __FORCE__
#include "Vector3.inl"
template<class T>
class Force : public Vector3<T>
{
public:
	Force()
	{
		memset(a, 0, 3 * sizeof(a[0]));
	}	
	Force(T& ax, T& ay, T& az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Force(T ax, T ay, T az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Force(Vector3<T> &r)
	{
		a[0] = r.GetX();
		a[1] = r.GetY();
		a[2] = r.GetZ();
	}
};
typedef Force<double> Forced;
typedef Force<float> Forcef;
typedef Force<int> Forcei;

#endif //__FORCE__
