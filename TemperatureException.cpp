#include"TemperatureException.hpp"

void TemperatureException::displayError()
{
    std::cout<<"Temperature Exception Handled ( "<< this->errorID<<" ) : "<<this->errorMessage<<std::endl;
}


TemperatureException::~TemperatureException()
{
    
}