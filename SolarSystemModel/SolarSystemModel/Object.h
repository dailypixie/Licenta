//Object is designed to be a base class for Planets, Moons, and Sun
#ifndef __OBJECT__
#define __OBJECT__
#include "Vector3.inl"
#include "Acceleration.h"
#include "Position.h"
#include "Force.h"
#include "Velocity.h"
#include <iostream>
class Object
{
private:
	double m_mass;
	Positiond m_pos;
	Velocityd m_vel;
	Accelerationd m_accel;
public:
	Object (double a_mass,
		Positiond a_pos = Positiond::Zero(),
		Velocityd a_vel = Velocityd::Zero(),
		Accelerationd a_accel = Accelerationd::Zero()):
		m_mass(a_mass),
		m_pos(a_pos),
		m_vel(a_vel),
		m_accel(a_accel)
		{}
	double GetMass() const {return m_mass;}
	Positiond GetPos() const {return m_pos;}
	Velocityd GetVel() const {return m_vel;}
	Accelerationd GetAccel() const {return m_accel;}

	void SetMass(double a_mass){m_mass = a_mass;}
	void SetPos(Positiond a_pos){m_pos = a_pos;}
	void SetVel(Velocityd a_vel){m_vel = a_vel;}
	void SetAccel(Accelerationd a_accel){m_accel = a_accel;}
	void Move(double dt);
	friend std::ostream& operator<<(std::ostream& os, const Object& ser);
};
#endif // __OBJECT__