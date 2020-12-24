#include "Range.h"
#include iostream

using namespace std;

Range::Range()
{
}
Range::bool check_range(float &input_APPS_sensor1, float &input_APPS_sensor2, &input_Steering_sensor, float noise)
{
    float max_value1, max_value2, min_value1, min_value2;
        max_value1 = 800.0;
        max_value2 = 900.0;
        min_value1 = 100.0;
        min_value2 = 200.0;
        
        if (input_APPS_sensor1 > max_value1 && input_APPS_sensor1 <= (max_value1 + noise))
        {
            input_APPS_sensor1 = max_value1;
        }
        
        if (input_APPS_sensor1 < min_value1 && input_APPS_sensor1 >= (min_value1 - noise))
        {
            input_APPS_sensor1 = min_value1;
        }
        
        if (input_APPS_sensor2 > max_value2 && input_APPS_sensor2 <= (max_value2 + noise))
        {
            input_APPS_sensor2 = max_value2;
        }
        
         if (input_APPS_sensor2 < min_value2 && input_APPS_sensor2 >= (min_value2 - noise))
        {
            input_APPS_sensor2 = min_value2;
        }
        
        if (input_Steering_sensor > max_value1 and input_Steering_sensor <= (max_value1 + noise))
        {
            input_Steering_sensor = max_value1;
        }
        
        if (input_Steering_sensor < min_value1 and input_Steering_sensor >= (min_value1 - noise))
        {
            input_Steering_sensor = min_value1;
        }
        
        
        if(input_APPS_sensor1 > max_value1 || input_APPS_sensor1 < min_value1 || input_APPS_sensor2 > max_value2 || input_APPS_sensor2 < min_value2 || input_Steering_sensor > max_value1 || input_Steering_sensor < min_value1)
        {
            return false;
        }                   
        
        
    return true;
}