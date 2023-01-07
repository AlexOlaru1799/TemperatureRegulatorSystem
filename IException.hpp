
#include<iostream>
#include<string>

// Interface for the Exception class


class IException{
public:

    // virtual method for displaying the error message in order to be able to display different formats of error messages depending on the Exception type
    virtual void displayError() = 0;

    virtual ~IException();

};