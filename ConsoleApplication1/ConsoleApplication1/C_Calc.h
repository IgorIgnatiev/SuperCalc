#pragma once
namespace calc
{
	class C_Calc
	{
	protected:
		float distance;

		C_Calc(float distance);
		virtual float calc() = 0;
	};
}