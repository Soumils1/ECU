#include "PowerLimitation.h"
#include iostream

using namespace std;

PowerLimitation::PowerLimitation()
{
}
PowerLimitation::bool check_power(float temp_torque_left, float temp_torque_right, float omega_left_wheel, float omega_right_wheel, float &final_torque_left, float &final_torque_right)
{
	float down_factor = 1.0;
	final_torque_left = temp_torque_left/down_factor;
	final_torque_right = temp_torque_right/down_factor;

	//80kW limitation, for safety considering 78kW
	float power_limitation = 78000.0;

	while(true)
	{
		if(((final_torque_left * omega_left_wheel) + (final_torque_right * omega_right_wheel)) > power_limitation)
		{
			down_factor += 0.1;
			final_torque_left = temp_torque_left/down_factor;
			final_torque_right = temp_torque_right/down_factor;
		}
		else
		{
			break;
		}
	}

	if(temp_torque_left < 0 || temp_torque_right < 0 || omega_left_wheel < 0 || omega_right_wheel < 0)
	{
		return false;
	}
	return true;

}
