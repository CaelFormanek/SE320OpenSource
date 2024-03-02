#pragma once
#include <string>

class Option
{
  private:
    std::string option; // string for the option
    int optionID; // ID for the option
  public:
    std::string getOptionStr(); // get the option str
    int getOptionID(); // get the option id
    Option(std::string option, int optionID); // constructor
    ~Option(); // destructor
    
};
