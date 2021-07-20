#include "C_Calc_Trip.h"
using namespace calc_trip;
C_Calc_Trip::C_Calc_Trip(float petrol_cost, float distance, float average_outgo) : C_Calc(distance)
{
	this->average_outgo = average_outgo;
	this->petrol_cost = petrol_cost;
}
float C_Calc_Trip::calc()
{
	return (this->distance / 100.0 * this->average_outgo * this->petrol_cost);
}