#ifndef __POSITION__
#define __POSITION__
#include "Vector3.inl"
template<class T>
class Position : public Vector3<T>
{
public:
	Position()
	{
		memset(a, 0, 3 * sizeof(a[0]));
	}
	Position(T& ax, T& ay, T& az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Position(T ax, T ay, T az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Position(Vector3<T> &r)
	{
		a[0] = r.GetX();
		a[1] = r.GetY();
		a[2] = r.GetZ();
	}
};
typedef Position<double> Positiond;
typedef Position<float> Positionf;
typedef Position<int> Positioni;
#endif //__POSITION__