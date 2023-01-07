#pragma once
#include<iostream>

#include<string>

#include"Temperature.hpp"

//Abstract class for the Temperature heating/cooling system that presents the common properties 

class ATemperatureSystem
{

protected:

    bool isON;

public:

    ATemperatureSystem() { this->isON = false;}

    virtual void turnON() = 0;
    virtual void turnOFF() = 0;

    //virtual method for running the System that has different functionalities for the Heating/Cooling System
    virtual void continueCycle(Temperature *temperature) = 0;

    bool getIsOn() {return this->isON;}

    virtual ~ATemperatureSystem() {};

};