#pragma once
#include <string>

class Option
{
  private:
    std::string option; // string for the option
    int optionID; // ID for the option
  public:
    std::string getOption(); // get the option str
    int getOptionID(); // get the option id
    Option(std::string option, int optionID); // constructor
    ~Option(); // destructor
    
};

std::string Option::getOption()
{
  return this->option;  
}

int Option::getOptionID()
{
  return this->optionID;
}

Option::Option(std::string option, int optionID)
{
  this->option = option;
  this->optionID = optionID;
}

Option::~Option()
{

}
