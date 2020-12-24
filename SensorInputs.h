#ifndef SensorInputs_H
#define SensorInputs_H

class SensorInputs
{
    public:
        SensorInputs();
        void take_sensor_inputs(float &input_APPS_sensor1,
                            float &input_APPS_sensor2, float &input_Steering_sensor, float &noise, float &hard_brake_pressure,
                            float &omega_left_wheel, float &omega_right_wheel);
        };
        
#endif