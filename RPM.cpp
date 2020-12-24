#include "RPM.h"
#include iostream

using namespace std;




RPM::RPM()
{
}
RPM::void rpm_vales(float &input_APPS_sensor1, float &input_APPS_sensor2, float &input_Steering_sensor, float &temp_rpm_left, float &temp_rpm_right, float &input_APPS_sensor)
{
    //normalising constants

    float x1, xa, x2, c1, ca, c2;
    x1 = 1/700;
    c1 = -1/7;

    xa = 1/700;
    ca = -2/7;

    x2 = 1/350;
    c2 = -9/7;

     if(input_Steering_sensor >= 400.0 && input_Steering_sensor <= 500.0{
                    input_Steering_sensor = 450.0
                }

      input_APPS_sensor1 = input_APPS_sensor1 * x1 + c1;
      input_APPS_sensor2 = input_APPS_sensor2 * xa + ca;

      input_APPS_sensor = (input_APPS_sensor1 + input_APPS_sensor2) / 2;

input_Steering_sensor = input_Steering_sensor * x2 + c2;

float max_rpm_value, min_rpm_value;
max_rpm_value = 100.0;
min_rpm_value = 0.0;


 # Assuming
float contribution_APPS_sensor, contribution_Steering_sensor;
    contribution_APPS_sensor = 0.9;
    contribution_Steering_sensor = 1 - contribution_APPS_sensor;

if(input_APPS_sensor >= 0 && input_APPS_sensor <= 1 && input_Steering_sensor >= 0 && input_Steering_sensor <= 1)
{
    float APPS_RPM, Steering_RPM;

    APPS_RPM = (max_rpm_value - min_rpm_value) * input_APPS_sensor;
    Steering_RPM = (max_rpm_value - min_rpm_value) * input_Steering_sensor;
    

    temp_rpm_left = (contribution_APPS_sensor * APPS_RPM) + (contribution_Steering_sensor * Steering_RPM);
    temp_rpm_right = (contribution_APPS_sensor * APPS_RPM) - (contribution_Steering_sensor * Steering_RPM);
}
else{
    temp_rpm_right = 0;
    temp_rpm_left = 0;
}

}
