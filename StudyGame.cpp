#include "StudyGame.h"
#include <iostream>

StudyGame::StudyGame(int numquestions)
{
  this->numquestions = numquestions;
  questionsarr = new Question*[numquestions];
}

StudyGame::~StudyGame()
{
  for (int i = 0; i < numquestions; i++)
  {
    delete questionsarr[i];
  }
  delete[] questionsarr;
}

int StudyGame::displayOptions(int iteration)
{
  std::string input = "";
  if (iteration == 0)
  {
    std::cout << "Welcome to your study game!\n" << std::endl;
    std::cout << "Press 1 to play game" << std::endl;
    std::cout << "Press 2 to exit" << std::endl;
    std::cout << ": ";
    std::cin >> input;
  }
  else
  {
    std::cout << std::endl;
    std::cout << "Press 1 to play again" << std::endl;
    std::cout << "Press 2 to exit" << std::endl;
    std::cout << ": ";
    std::cin >> input;
    std::cout << std::endl;
  }
  int intinput = std::stoi(input);
  return intinput;
}

void StudyGame::addQuestion(Question* q)
{
  for (int i = 0; i < numquestions; i++)
  {
    if (questionsarr[i] == nullptr)
    {
      questionsarr[i] = q;
    }
  }
  
}

void StudyGame::play()
{
  int iteration = 0;
  
  while (displayOptions(iteration) == 1)
  {
    ++iteration;

    for (int i = 0; i < numquestions; i++)
    {
      std::cout << "Question " << i+1 << ": " << questionsarr[i]->getQuestionStr() << std::endl;
      for (int j = 0; j < 4; j++)
      {
        std::cout << j+1 << ". " << questionsarr[i]->getOption(j+1)->getOptionStr() << std::endl;
      }
      std::string answer;
      std::cout << "Enter your answer (1,2,3, or 4): ";
      std::cin >> answer;
      if (std::stoi(answer) == questionsarr[i]->getCorrectAnswerID())
      {
        std::cout << "Correct!" << std::endl;
      }
      else
      {
        std::cout << "Incorrect. The answer is option " << questionsarr[i]->getCorrectAnswerID() << "." << std::endl;
      }
    }
    
  }
  
  
}
