
#include<iostream>
#include<string>


#include"Thermostat.hpp"
#include"CoolingSystem.hpp"
#include"HeatingSystem.hpp"

#include"PreferencesSystem.hpp"


using namespace std;


//The main device that incorporates all the required pieces in order to regulate the temperature

class HeatingStation
{
private:
    static HeatingStation *instance;

    Thermostat *_thermostat;
    PreferencesSystem *_preferences;
    CoolingSystem *_coolingSystem;
    HeatingSystem *_heatingSystem;


    bool setTemperatureBase; //indicator that allows us to see when the temperature has reached the desired range in order to start the efficiency mode
    bool setEfficiencyBase; // indicator that allows the heating system to keep on heating until getting close to the maximum desired temperature



    HeatingStation();
    virtual ~HeatingStation();

public:

    HeatingStation(HeatingStation &temp) = delete;
    void operator=(HeatingStation &tem) =delete;

    void regulateTemperature();

    static HeatingStation* getInstance();
    static void deleteInstance();

    PreferencesSystem *getPreferencesSystem(){return this->_preferences;}


};