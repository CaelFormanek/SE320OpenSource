#include "Option.h"

Option::Option(std::string option, int optionID)
{
  this->option = option;
  this->optionID = optionID;
}

Option::~Option()
{

}

std::string Option::getOptionStr()
{
  return this->option;  
}

int Option::getOptionID()
{
  return this->optionID;
}