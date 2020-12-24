#ifndef InitialConditions_H
#define InitialConditions_H

class InitialConditions
{
    public:
        InitialConditions();
        bool check_initial_conditions(bool &car_started, bool &break_sensor_value, bool &ignition_key);
        };
        
#endif