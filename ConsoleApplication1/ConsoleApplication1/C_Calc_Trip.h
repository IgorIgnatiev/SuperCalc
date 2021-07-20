#pragma once
#include "C_Calc.h"
using namespace calc;
namespace calc_trip
{
    class C_Calc_Trip final :
        public C_Calc
    {
    public:
        C_Calc_Trip(float petrol_cost, float distance, float average_outgo);
        float calc() override;
    private:
        float average_outgo;
        float petrol_cost;
    };
}
