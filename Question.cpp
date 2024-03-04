#include "Question.h"

Question::Question(std::string option1Str, std::string option2Str, std::string option3Str, std::string option4Str, int correctAnswerID, std::string questionstr)
{
  this->option1 = new Option(option1Str, 1);
  this->option2 = new Option(option2Str, 2);
  this->option3 = new Option(option3Str, 3);
  this->option4 = new Option(option4Str, 4);
  this->correctAnswerID = correctAnswerID;
  this->questionstr = questionstr;
  this->numOptions = 4;

  optionsarr = new Option*[4];
  optionsarr[0] = option1;
  optionsarr[1] = option2;
  optionsarr[2] = option3;
  optionsarr[3] = option4;
}

Question::~Question()
{
  for (int i = 0; i < 4; i++)
  {
    delete optionsarr[i];
  }
  delete[] optionsarr;
}

Option* Question::getOption(int optionID)
{
  return optionsarr[optionID-1];
}

std::string Question::getQuestionStr()
{
  return questionstr;
}

int Question::getCorrectAnswerID()
{
  return correctAnswerID;
}

int Question::getNumOptions()
{
  return numOptions;
}

void Question::addOption(Option* o)
{

}