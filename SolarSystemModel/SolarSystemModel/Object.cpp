#include "Object.h"

void Object::Move(double dt)
	{
		m_vel = m_vel + m_accel * dt;
		m_pos = m_pos + m_vel * dt;
	}
std::ostream& operator<<(std::ostream& os, const Object& ser)
	{
	    os<<"Object\n";
		os<<"Mass"<<" "<<ser.GetMass()<<"\n";
		os<<"Position "<<ser.GetPos().GetX()<<" "<<ser.GetPos().GetY()<<" "<<ser.GetPos().GetZ()<<"\n";
		os<<"Velocity "<<ser.GetVel().GetX()<<" "<<ser.GetVel().GetY()<<" "<<ser.GetVel().GetZ()<<"\n";
		os<<"Acceleretaion "<<ser.GetAccel().GetX()<<" "<<ser.GetAccel().GetY()<<" "<<ser.GetAccel().GetZ()<<"\n";
	    return os;
	}