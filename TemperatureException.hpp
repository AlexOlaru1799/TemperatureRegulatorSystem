
#include "AException.hpp"

//a particular type of Exception that is triggered when the users wants to set invalid temperature ranges

class TemperatureException:public AException
{
public:
    TemperatureException(std::string mes,int id) : AException(mes,id){};

    void displayError() override;


    virtual ~TemperatureException();

};