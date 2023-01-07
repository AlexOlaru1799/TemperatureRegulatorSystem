#include "Temperature.hpp"

Temperature& Temperature::operator++()
{
    srand(time(NULL));

    // Generate a random float between 0.55 and 0.75 by which we increment the temperature
    float random_float = 0.55 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (0.75 - 0.55)));
    temperature+=random_float;
    return *this;
}

Temperature& Temperature::operator--()
{
    srand(time(NULL));

    // Generate a random float between 0.55 and 0.75 by which we decrement the temperature
    float random_float = 0.55 + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (0.75 - 0.55)));
    temperature-=random_float;
    return *this;
}

ostream& operator<<(ostream& os, const Temperature& temp)
{
    os<<"Current Temperature : "<< temp.temperature<<endl;
    return os;
}