#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

//Class that simulates the temperature of the room we want to maintain beetween certain temperatures

class Temperature
{
private:
    float temperature;

public:

    Temperature(float temp) : temperature(temp) { };

    //incrementing the temperature
    Temperature& operator++();

    //decrementing the temperature
    Temperature& operator--();

    void operator+(float temp){this->temperature+= temp;}
    void operator-(float temp){this->temperature-= temp;}
    

    float getTemperature() { return this->temperature;};

    

    friend ostream& operator<<(ostream& os, const Temperature& temp);
    virtual ~Temperature(){};

};