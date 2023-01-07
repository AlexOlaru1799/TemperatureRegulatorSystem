
#include<iostream>

#include"TemperatureException.hpp"
using namespace std;


//Class that stores the temperature preferences of the user

class PreferencesSystem
{
private:
    float minTemperature;
    float maxTemperature;

public:

    PreferencesSystem(float min = 15, float max = 22) : minTemperature(min),maxTemperature(max) {
        cout<<"Default Temperature Preference set to the range of 15°C - 25°C"<<endl;
    };

    float getMinTemperature(){return this->minTemperature;}
    float getMaxTemperature(){ return this->maxTemperature;}


    void adjustMinTemp(float min);
    void adjustMaxTemp(float max);




    virtual ~PreferencesSystem() { };

};