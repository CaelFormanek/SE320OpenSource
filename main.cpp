#include <iostream>
#include "StudyGame.h"
#include "Tester.h"

int main(int argc, char** argv)
{
  // declare main Tester
  Tester* t = new Tester();

  // test for issue 2
  Question* q = new Question("Alaska", "Rhode Island", "South Dakota", "Louisiana", 1, "Which state is the largest");
  Question* q1 = new Question("beep", "beep", "glorp", "norb", 3, "Which word is the coolest");
  StudyGame* s = new StudyGame(1);
  s->addQuestion(q);
  s->addQuestion(q1);
  t->assertEq("Test Question Count Dynamic", q1, s->questionsarr[1]);

  // test for issue 5
  StudyGame* s1 = new StudyGame(2);
  s1->addQuestion(q);
  s1->addQuestion(q1);
  t->assertEq("Test addQuestion()", q1, s1->questionsarr[1]);

  // test for issue 1
  Option* o = new Option("North Dakota", 5);
  q->addOption(o);
  t->assertEqInt("Test addOption() 1", 5, q->getNumOptions());
  

  return 0;
}