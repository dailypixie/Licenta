#include <iostream>

#include "Object.h"
#include "Vector3.inl"
#include "Nature.h"
#include "Ephemeris.h"
#include "Acceleration.h"
#include "Force.h"

int main()
{
	Forced f;
	Accelerationd a;

	f = a + f;

	Nature::GetAttractionForce(&Ephemeris::SimpleObject1,&Ephemeris::SimpleObject2,&f);

	while (true)
	{
		Nature::GetAttractionForce(&Ephemeris::SimpleObject1,&Ephemeris::SimpleObject2,&f);
		//acceleratia trebuie sa fie proportionala cu masa -> f = m*a -> a = f/m

		Ephemeris::SimpleObject1.SetAccel(Ephemeris::SimpleObject1.GetAccel() +  f / Ephemeris::SimpleObject1.GetMass());
		Ephemeris::SimpleObject2.SetAccel(Ephemeris::SimpleObject2.GetAccel() - f / Ephemeris::SimpleObject2.GetMass());
		Ephemeris::SimpleObject1.Move(100);
		Ephemeris::SimpleObject2.Move(100);
		std::cout<<"Obiect mare in origine\n";
		std::cout<<Ephemeris::SimpleObject1;
		std::cout<<std::endl;
		std::cout<<"Obiect mic la 2 2\n";
		std::cout<<Ephemeris::SimpleObject2;
		char xl;
		std::cin>>xl;
	}
	return 0;
}