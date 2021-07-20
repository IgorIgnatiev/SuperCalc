#pragma once
#include"C_Calc.h"
using namespace calc;
namespace calc_fuel
{
	class C_Calc_Fuel final :
		public C_Calc
	{
	public:
		C_Calc_Fuel(float _litres, float _distance);

		float calc() override;
	private:
		float _litres;
	};
}
