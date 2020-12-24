#include "HardBraked.h"
#include iostream

using namespace std;

HardBraked::HardBraked()
{
}
HardBraked::bool check_hard_braking(float hard_break_pressure)
{

	float max_pressure;
	max_pressure = 30.0;

	if(hard_break_pressure >= 30)
	{
		return true;
	}
	else
	{
		return false;
	}
}