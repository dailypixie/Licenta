#include "Nature.h"

	void Nature::GetAttractionForce(const Object const *a_obj1, const Object const *a_obj2, Forced *forceVector)
		{
			if(forceVector == NULL || a_obj1 == NULL || a_obj2 == NULL)
				return;
			//    G * m1 * m2
			//F = -----------
			//        r*r
			double Numerator = (G * a_obj1->GetMass() * a_obj2->GetMass());
			double cX =  Numerator / 
				(a_obj1->GetPos().GetX() - a_obj2->GetPos().GetX() * (a_obj1->GetPos().GetX() - a_obj2->GetPos().GetX()));
			double cY = Numerator / 
				(a_obj1->GetPos().GetY() - a_obj2->GetPos().GetY() * (a_obj1->GetPos().GetY() - a_obj2->GetPos().GetY()));
			double cZ = Numerator / 
				(a_obj1->GetPos().GetZ() - a_obj2->GetPos().GetZ() * (a_obj1->GetPos().GetZ() - a_obj2->GetPos().GetZ()));
			
			forceVector->SetX(cX);
			forceVector->SetY(cY);
			forceVector->SetZ(cZ);
			
		}
