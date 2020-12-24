int main()
{
	bool car_started = false;
	int continue_running = 1;

	while (continue_running == 1)
	{
		bool break_sensor_value, ignition_key;

		InitialConditions initialConditions;
		if(initialConditions.check_initial_conditions(car_started, break_sensor_value, ignition_key))
		{

			//Taking Sensor Inputs
			float input_APPS_sensor1, input_APPS_sensor2, input_APPS_sensor, input_Steering_sensor, noise, hard_brake_pressure, omega_left_wheel, omega_right_wheel, temp_rpm_left, temp_rpm_right;
			SensorInputs sensorInputs;
			sensorInputs.take_sensor_inputs(input_APPS_sensor1, input_APPS_sensor2, input_Steering_sensor, noise, hard_brake_pressure, omega_left_wheel, omega_right_wheel);

			//Hard Brake
			bool hard_braked;
			HardBraked hardBraked;
			hard_braked = hardBraked.check_hard_braking(hard_brake_pressure);

			Range range;
			if(range.check_range(input_APPS_sensor1, input_APPS_sensor2, input_Steering_sensor, noise))
			{
				//Plausibility
				APPS_Plausibility apps_Plausibility;
				if(apps_Plausibility.check(input_APPS_sensor1, input_APPS_sensor2))
				{
					//Temp rpm
					RPM rpm;
					rpm.rpm_vales(input_APPS_sensor1, input_APPS_sensor2, input_Steering_sensor, temp_rpm_left, temp_rpm_right, input_APPS_sensor);

					//Torque
					float temp_torque_left, temp_torque_right;
					Torque torque;
					torque.give_torque(temp_rpm_left, temp_rpm_right, temp_torque_left, temp_torque_right);

					//Power Limitation 80kW
					PowerLimitation powerLimitation;
					float final_torque_left, final_torque_right;
					if(!(hard_braked==true && input_APPS_sensor>0.25))
					{
						if(powerLimitation.check_power(temp_torque_left, temp_torque_right, omega_left_wheel, omega_right_wheel, final_torque_left, final_torque_right))
						{
							cout<<"Torque value of left wheel: "<<final_torque_left<<endl;
							cout<<"Torque value of right wheel: "<<final_torque_right<<endl;
							cout<<"Do you want to run again answer with 0 or 1: ";
							cin>>continue_running;
						}
						else
						{
							cout<<"Torque value of motor: "<< 0.0<<endl;
							cout<<"Do you want to run again answer with 0 or 1: ";
							cin>>continue_running;
						}
					}



				}
				else
				{
					cout<<"Torque value of motor: "<< 0.0<<endl;
						cout<<"Do you want to run again answer with 0 or 1: ";
						cin>>continue_running;
				}
			}

			else
			{
						cout<<"Torque value of motor: "<< 0.0<<endl;
						cout<<"Do you want to run again answer with 0 or 1: ";
						cin>>continue_running;
			}

		}

	}
}