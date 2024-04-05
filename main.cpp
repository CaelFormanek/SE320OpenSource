#include <iostream>
#include "StudyGame.h"
#include "Tester.h"

int run_all_tests(Tester* t)
{
  int returnval = 1;

  // test for issue 2
  Question* q = new Question("Alaska", "Rhode Island", "South Dakota", "Louisiana", 1, "Which state is the largest");
  Question* q1 = new Question("beep", "beep", "glorp", "norb", 3, "Which word is the coolest");
  StudyGame* s = new StudyGame(1);
  s->addQuestion(q);
  s->addQuestion(q1);
  int test2 = t->assertEq("Test Question Count Dynamic", q1, s->questionsarr[1]);
  if (test2 == -1)
  {
    returnval = -1;
  }

  // test for issue 5
  StudyGame* s1 = new StudyGame(2);
  s1->addQuestion(q);
  s1->addQuestion(q1);
  int test5 = t->assertEq("Test addQuestion()", q1, s1->questionsarr[1]);
  if (test5 == -1)
  {
    returnval = -1;
  }

  // test for issue 1
  Option* o = new Option("North Dakota", 5);
  q->addOption(o);
  int test1 = t->assertEqInt("Test addOption() 1", 5, q->getNumOptions());
  if (test1 == -1)
  {
    returnval = -1;
  }

  return returnval;
}

int main(int argc, char** argv)
{
  // declare main Tester
  Tester* t = new Tester();

  if (run_all_tests(t) == -1)
  {
    std::cout << "Test(s) failed" << std::endl;
    return -1;
  }

  return 0;
}