#include"PreferencesSystem.hpp"


void PreferencesSystem::adjustMinTemp(float min)
{
    cout<<"Adjusting minimun Temperature to "<<min<<endl;
    if(min < 0)
    {
        throw new TemperatureException("Minimum Temperature excedeed, returning to default values...",3110);
        
        
    }
    this->minTemperature = min;
}

void PreferencesSystem::adjustMaxTemp(float max)
{
    cout<<"Adjusting maximum Temperature to "<<max<<endl;
    if(max > 40)
    {
       throw new TemperatureException("Maximum Temperature excedeed, returning to default values...",3115);
    }
    this->maxTemperature = max;
}