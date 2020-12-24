#include "InitialConditions.h"
#include iostream

using namespace std;

InitialConditions::InitialConditions()
{
}
InitialConditions::bool check_initial_conditions(bool &car_started, bool &break_sensor_value, bool &ignition_key)
{
	if(!car_started)
	{
		cout<<"Break Sensor value digital 0 or 1: ";
		cin>>break_sensor_value;

		cout<<"Ignition Key value digital 0 or 1: ";
		cin>>ignition_key;
	}

	if(break_sensor_value == 1 && ignition_key == 1)
	{
        car_started = true;
    }

    if(car_started == true){
    	return true;
    }

    return false;
	


}

