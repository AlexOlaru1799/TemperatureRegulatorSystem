#include <iostream>
#include<unistd.h>
#include<gtest/gtest.h>
#include"HeatingStation.hpp"





int main(int, char**) {
    
    HeatingStation *heatingStation = HeatingStation::getInstance();


    TemperatureException test("asd",3);
    cout<<"Would you like to adjust the default temperature range ? ( 15 - 22 °C) Y/n"<<endl;
    string temp;
    cin>>temp;
    if(temp == "Y")
    {
        try
        {
            cout<<"Enter min Temperature : ";
            float min;
            cin>>min;
            cout<<endl;
            cout<<"Enter max Temperature : ";
            float max;
            
            cin>>max;
            heatingStation->getPreferencesSystem()->adjustMinTemp(min);
            heatingStation->getPreferencesSystem()->adjustMaxTemp(max);
        }
        catch(IException* exc)
        {
            exc->displayError();
        }
    }

    while(true)
    {
        heatingStation->regulateTemperature();

        sleep(1);
    }

    return 0;
   
}
