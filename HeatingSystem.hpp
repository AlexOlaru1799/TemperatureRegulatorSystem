
#include"ATemperatureSystem.hpp"
#include"Temperature.hpp"

//Class responsible for the heating of the room

class HeatingSystem : public ATemperatureSystem
{
public:

    HeatingSystem() { std::cout<<"Turning ON the Heating System..."<<std::endl;}

    void turnON() override;
    void turnOFF() override;

    void continueCycle(Temperature *temperature)override;


    virtual ~HeatingSystem(){};
};