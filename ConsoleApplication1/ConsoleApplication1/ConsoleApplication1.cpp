#include <iostream>
#include"C_Calc_Fuel.h"
#include"C_Calc_Trip.h"
using namespace calc_fuel;
using namespace calc_trip;
int main()
{
	C_Calc_Fuel* fuel = new C_Calc_Fuel(50, 500);
	std::cout << "Fuel outgo:\t" << fuel->calc() << "\n";
	C_Calc_Trip* trip = new C_Calc_Trip(15, 500, fuel->calc());
	std::cout << "Trip cost:\t" << trip->calc() << "\n";
}
