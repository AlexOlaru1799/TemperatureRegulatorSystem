#include"HeatingSystem.hpp"


void HeatingSystem::turnON()
{
    std::cout<<"Starting heating phase..."<<std::endl;
    this->isON = true;
}

void HeatingSystem::turnOFF()
{
    std::cout<<"Ending heating phase..."<<std::endl;
    this->isON = false;
}


//The temperature is incremented in order to simulate the heating of the room
void HeatingSystem::continueCycle(Temperature *temperature)
{
    ++*temperature;
}
