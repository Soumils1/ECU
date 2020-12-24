#include "Torque.h"
#include iostream

using namespace std;

Torque::Torque()
{
}
Torque::void give_torque(float &temp_rpm_left, float &temp_rpm_right, float &temp_torque_left, float &temp_torque_right)
{
	//Assumption
	float scaling_rpm_to_torque_constant = 4.0;

	//Assuming max toque 400.0 and min torque 0.0
	if(temp_rpm_left>=0 && temp_rpm_right>=0)
{
	temp_torque_left = scaling_rpm_to_torque_constant*temp_rpm_left;
	temp_torque_right = scaling_rpm_to_torque_constant*temp_rpm_right;
}

}