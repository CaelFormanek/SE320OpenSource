#include <iostream>
#include "StudyGame.h"

int main(int argc, char** argv)
{
  Question* q = new Question("Option 1", "Option 2", "Option 3", "Option 4", 1, "Which option is correct?");
  Question* q1 = new Question("beep", "beep", "glorp", "norb", 3, "Which word is the coolest");
  
  StudyGame* s = new StudyGame(2);
  s->addQuestion(q);
  s->addQuestion(q1);

  // std::cout << s->questionsarr[1]->getQuestionStr() << std::endl;
  s->play();
  
  return 0;
}