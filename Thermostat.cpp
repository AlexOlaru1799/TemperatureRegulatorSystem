#include"Thermostat.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>


Temperature* Thermostat::detectTemperature()
{

    float tempDeclineRate = 0.25;



    if(this->temperature == nullptr)
    {
        std::cout<<"Thermostat is turning ON"<<std::endl;
        std::cout<<"Detecting initial temperature..."<<std::endl;

        srand(time(NULL));


        // Generate a random float between -10 and 30 to be our initial temperature
        float _temperatureDetected = -10 + static_cast <float> (rand()) / RAND_MAX * 40;

        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout<<"Room Temperature detected : "<<_temperatureDetected<<" °C"<<std::endl;

        this->temperature = new Temperature(_temperatureDetected);

        
    }
    else{
        std::cout<<"Detecting room temperature..."<<std::endl;
        *this->temperature-tempDeclineRate;
        std::cout<<*temperature;
    }

    return this->temperature;
}