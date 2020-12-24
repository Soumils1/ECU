#ifndef PowerLimitation_H
#define PowerLimitation_H

class PowerLimitation
{
    public:
        PowerLimitation();
        bool check_power(float temp_torque_left, float temp_torque_right, float omega_left_wheel, float omega_right_wheel, float &final_torque_left, float &final_torque_right);
        };
        
#endif