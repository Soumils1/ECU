#include "SensorInputs.h"
#include iostream

using namespace std;

SensorInputs::SensorInputs()
{
}
SensorInputs::void take_sensor_inputs(float &input_APPS_sensor1,
                            float &input_APPS_sensor2, float &input_Steering_sensor, float &noise, float &hard_brake_pressure,
                            float &omega_left_wheel, float &omega_right_wheel)
{
	    cout<<"The First APPS sensor value between 100 and 800: ";
        cin>>input_APPS_sensor1;
        
        
        cout<<"The Second APPS sensor value between 200 and 900: ";
        cin>>input_APPS_sensor2;
        
        cout<<"The Steering sensor value between 100 and 800: ";
        cin>>input_Steering_sensor;
        
        cout<<"The acceptable noise near min and max input values: ";
        cin>>noise;
        
        cout<<"The acceptable pressure greater than 0: ";
        cin>>hard_brake_pressure;
        
        cout<<"The omega of the left wheel: ";
        cin>>omega_left_wheel;
        
        cout<<"The omega of the right wheel: ";
        cin>>omega_right_wheel;


        
}