#include <iostream>
#include "StudyGame.h"

int main(int argc, char** argv)
{
  Question* q = new Question("Alaska", "Rhode Island", "South Dakota", "Louisiana", 1, "Which state is the largest");
  Question* q1 = new Question("beep", "beep", "glorp", "norb", 3, "Which word is the coolest");
  
  StudyGame* s = new StudyGame(2);
  s->addQuestion(q);
  s->addQuestion(q1);

  s->play();
  
  return 0;
}