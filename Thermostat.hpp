
#include<iostream>

#include"Temperature.hpp"

//Class that detects the temperature of the room 

class Thermostat
{
private:
    Temperature *temperature;


public:

    Thermostat() {
        this->temperature = nullptr;
        detectTemperature();
    };

    Temperature* detectTemperature();


    virtual ~Thermostat() { delete(temperature);};

};