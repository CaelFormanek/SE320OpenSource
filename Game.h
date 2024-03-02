#pragma once
#include "Question.h"

 class Game
 {
  private:
    Question** questionsarr; // array top hold the questions
    int numquestions;
  public:
    Game(int numquestions); // constructor 
    ~Game(); // destructor
    void play();
 };