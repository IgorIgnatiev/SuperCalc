#include "C_Calc_Fuel.h"

calc_fuel::C_Calc_Fuel::C_Calc_Fuel(float _litres, float _distance) : C_Calc(_distance)
{
	this->_litres = _litres;
}

float calc_fuel::C_Calc_Fuel::calc()
{
	return (this->_litres / this->distance) * 100;
}
