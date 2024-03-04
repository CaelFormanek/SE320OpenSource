#pragma once
#include "Option.h"
#include <string>

class Question
{
  
  private:
    Option* option1; // question answer 1
    Option* option2; // question answer 2
    Option* option3; // question answer 3
    Option* option4; // question answer 4
    int correctAnswerID; // ID for the correct answer
    Option** optionsarr; // array that holds the answers
    int numOptions;
    std::string questionstr; // string for the actual question
    
  public:
    Question(std::string option1Str, std::string option2Str, std::string option3Str, std::string option4Str, int correctAnswerID, std::string questionstr);
    ~Question();
    Option* getOption(int optionID);
    std::string getQuestionStr();
    int getCorrectAnswerID();
    int getNumOptions();
    void addOption(Option* o);
};