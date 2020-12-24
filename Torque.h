#ifndef Torque_h
#define Torque_h

class Torque
{
    public:
        Torque();
        void give_torque(float &temp_rpm_left, float &temp_rpm_right, float &temp_torque_left, float &temp_torque_right);
        };
        
#endif