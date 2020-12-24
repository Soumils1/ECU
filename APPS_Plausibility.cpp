#include "APPS_Plausibility.h"
#include iostream

using namespace std;


APPS_Plausibility::APPS_Plausibility()
{
}
APPS_Plausibility::bool check(float input_APPS_sensor1, float input_APPS_sensor2){
	float max_value1, max_value2, min_value1, min_value2;
        max_value1 = 800.0;
        max_value2 = 900.0;
        min_value1 = 100.0;
        min_value2 = 200.0;

        float max_plausibility_percent_error_allowed;
        
        max_plausibility_percent_error_allowed = 10.0;

        float percent_APPS_sensor1, percent_APPS_sensor2;

        percent_APPS_sensor1 = (input_APPS_sensor1 - min_value1) * 100 / (max_value1 - min_value1);
        percent_APPS_sensor2 = (input_APPS_sensor2 - min_value2) * 100 / (max_value2 - min_value2);

       	float percent_difference;

       	percent_difference = percent_APPS_sensor1 - percent_APPS_sensor2;

       	if(percent_difference < -10 || percent_difference > 10)
       	{
       		return false;
       	}
       	else
       	{
       		return true;
       	}
}
