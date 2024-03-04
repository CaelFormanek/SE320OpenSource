#pragma once
#include "Question.h"

 class StudyGame
 {
  private:
    // Question** questionsarr; // array top hold the questions
    int displayOptions(int iteration);
    int numquestions;
  public:
    Question** questionsarr; // array top hold the questions
    StudyGame(int numquestions); // constructor 
    ~StudyGame(); // destructor
    void addQuestion(Question* q); // adds a question to the game
    void play(); // plays the game
 };