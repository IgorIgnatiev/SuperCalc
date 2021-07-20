#pragma once
class C_Calc
{
protected:
	float petrol_cost;
	float distance;

	C_Calc(float petrol_cost, float distance);
	virtual float calc() = 0;
};