
#include"ATemperatureSystem.hpp"

//Class responsible for the cooling of the room

class CoolingSystem : public ATemperatureSystem
{
public:
    CoolingSystem() { std::cout<<"Turning ON the Cooling System..."<<std::endl;}

    void turnON() override;
    void turnOFF() override;

    void continueCycle(Temperature *temperature)override;


    virtual ~CoolingSystem(){};
};