#ifndef __VECTOR3__
#define __VECTOR3__

template<class T>
class Vector3
{
protected:
	T a[3];
public:

	Vector3()
	{
		a[0] = 0;
		a[1] = 0;
		a[2] = 0;
	}
	Vector3(T& ax, T& ay, T& az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
	Vector3(T ax, T ay, T az)
	{
		a[0] = ax;
		a[1] = ay;
		a[2] = az;
	}
//Getters
	inline T GetX() const {return a[0];} 
	inline T GetY() const {return a[1];} 
	inline T GetZ() const {return a[2];} 
//Setters
	inline void SetX(T& argX){a[0] = argX;}
	inline void SetY(T& argY){a[1] = argY;}
	inline void SetZ(T& argZ){a[2] = argZ;}
//Operators	
	inline Vector3 operator+(Vector3& arg)
	{
		return Vector3(this->a[0] + arg.a[0],
			this->a[1] + arg.a[1],
			this->a[2] + arg.a[2]);
	}

	inline Vector3 operator-(Vector3& arg)
	{
		return Vector3(this->a[0] - arg.a[0],
			this->a[1] - arg.a[1],
			this->a[2] - arg.a[2]);
	}
//Scalar product
	inline Vector3 operator*(double arg)
	{
		return Vector3(this->a[0] * arg,
			this->a[1] * arg,
			this->a[2] * arg);
	}
//Scalar Division
	inline Vector3 operator/(double arg)
	{
		return Vector3(this->a[0] / arg,
			this->a[1] / arg,
			this->a[2] / arg);
	}
//Dot Product
	inline double operator*(Vector3& arg)
	{
		return double(this->a[0] * arg.a[0] +
			this->a[1] * arg.a[1] +
			this->a[2] * arg.a[2]);
	}
//Static Functions
	static Vector3<T> Unit()
		{
			return Vector3<T>(1,1,1);
		}
	static Vector3<T> Zero()
		{
			return Vector3<T>(0,0,0);
		}
};
typedef Vector3<double> Vector3d;
typedef Vector3<float> Vector3f;
typedef Vector3<int> Vector3i;

#endif //__VECTOR3__