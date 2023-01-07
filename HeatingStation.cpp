#include"HeatingStation.hpp"


HeatingStation* HeatingStation::instance = nullptr;


//The implemented algorithm for mainting the temperature between a minimum and a maximum works in the following manner:
//1. Firstly, the initial temperature is brought to the desired interval by either cooling or heating
//2. Once we have the temperature in the desired range, we start the efficiency mode, which does not use the cooling system at all
//3. The efficiency mode heats up the room close to the maximum temperatures and then stops the heating system letting the room
// cool down in a natural manner ( the cooling down is simulated at .25 degrees per second ) until close to the minumum desired temperature
//4. At this point the heating system starts heating the room again and the cycle continues.
void HeatingStation::regulateTemperature()
{
    Temperature* currentTemperature = this->_thermostat->detectTemperature();

    if(this->setTemperatureBase == false)
    {
        if(currentTemperature->getTemperature() <= this->_preferences->getMaxTemperature() && currentTemperature->getTemperature() >= this->_preferences->getMinTemperature())
        {
            this->setTemperatureBase = true;
            cout<<endl;
            cout<<"Base Interval Set :  Starting efficiency mode"<<endl;
            cout<<endl;
        }
        else if(currentTemperature->getTemperature() < this->_preferences->getMaxTemperature())
        {
            if(this->_heatingSystem->getIsOn() == false)
            {
                cout<<endl;
                this->_heatingSystem->turnON();
                this->_coolingSystem->turnOFF();
                cout<<endl;
            }
            else
            {
                this->_heatingSystem->continueCycle(currentTemperature);
            }
        }
        else if(currentTemperature->getTemperature()  > this->_preferences->getMaxTemperature())
        {
            if(this->_coolingSystem->getIsOn() == false)
            {
                cout<<endl;
                this->_coolingSystem->turnON();
                this->_heatingSystem->turnOFF();
                cout<<endl;
            }
            else
            {
                this->_coolingSystem->continueCycle(currentTemperature);
            }
        }
       
    }
    else{
        float temp = this->_preferences->getMaxTemperature() - (int)this->_preferences->getMaxTemperature() / 10;
        if(currentTemperature->getTemperature() < temp && this->setEfficiencyBase == true)
        {
            this->_heatingSystem->continueCycle(currentTemperature);
        }
        else
        {
            this->setEfficiencyBase = false;
            float temp2 = this->_preferences->getMinTemperature() + (int)this->_preferences->getMinTemperature()/ 5;
            if(currentTemperature->getTemperature()  < temp2)
            {
                this->setEfficiencyBase = true;
            }
        }
    }
   
    
}

HeatingStation *HeatingStation::getInstance()
{
    if(instance==nullptr)
    {
        HeatingStation::instance = new HeatingStation();
    }

    return instance;
}


void HeatingStation::deleteInstance()
{
    delete(instance);
    instance = nullptr;
}


HeatingStation::HeatingStation()
{
    cout<<"Congrats on your new Heating Station ! :D"<<endl;
    cout<<"The  Heating Station is configuring..."<<endl;
    
    this->_heatingSystem = new HeatingSystem();
    this->_coolingSystem = new CoolingSystem();
    this->_preferences = new PreferencesSystem();
    this->_thermostat = new Thermostat();

    this->setTemperatureBase = false;
    this->setEfficiencyBase = false;
}




HeatingStation::~HeatingStation()
{
    delete(instance);
    delete(_thermostat);
    delete(_preferences);
    delete(_coolingSystem);
    delete(_heatingSystem);
}