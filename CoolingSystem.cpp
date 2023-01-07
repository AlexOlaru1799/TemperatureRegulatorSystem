#include"CoolingSystem.hpp"

void CoolingSystem::turnON()
{
    std::cout<<"Starting Cooling down phase..."<<std::endl;
    this->isON = true;
}

void CoolingSystem::turnOFF()
{
    std::cout<<"Ending Cooling down phase..."<<std::endl;
    this->isON = false;
}



//The temperature is decremented in order to simulate the cooling of the room
void CoolingSystem::continueCycle(Temperature *temperature)
{
    --*temperature;
}
