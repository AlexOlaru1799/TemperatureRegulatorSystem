
#include "IException.hpp"

//Abstract class for Exception

class AException : public IException
{
protected:
    std::string errorMessage;
    int errorID;
public:

    AException(std::string mes,int id):errorMessage(mes),errorID(id){};

    std::string getErrorMessage() {return this->errorMessage;}
    int getErrorID() { return this->errorID;}

    virtual ~AException();

};