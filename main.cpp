#include <iostream>
#include <googletest/include/gtest/gtest.h>
#include "StudyGame.h"

// test that the program exits upon illegal reference
TEST(GetOptionTest, TestDeath)
{
  Question q("Alaska", "Rhode Island", "South Dakota", "Louisiana", 1, "Which state is the largest");
  ASSERT_DEATH(q.getOption(-1), "");
}

// test that a user can enter anything and the game will exit fine
// to run this test, type "banana" when prompted to enter 1 or 2
TEST(UserOptionTest, TestDeathInput)
{
  Question* q = new Question("Alaska", "Rhode Island", "South Dakota", "Louisiana", 1, "Which state is the largest");
  
  StudyGame* s = new StudyGame(1);
  s->addQuestion(q);

  s->play();
}

// test that issue 5 does not happen
TEST(AddQuestionTest, TestQuestion)
{
  Question* q = new Question("Alaska", "Rhode Island", "South Dakota", "Louisiana", 1, "Which state is the largest");
  Question* q1 = new Question("beep", "beep", "glorp", "norb", 3, "Which word is the coolest");

  StudyGame* s = new StudyGame(2);
  s->addQuestion(q);
  s->addQuestion(q1);

  EXPECT_NE(s->questionsarr[0], s->questionsarr[1]);
}

// test that issue 2 is fixed
TEST(TestDynamic, TestDyn)
{
  Question* q = new Question("Alaska", "Rhode Island", "South Dakota", "Louisiana", 1, "Which state is the largest");
  Question* q1 = new Question("beep", "beep", "glorp", "norb", 3, "Which word is the coolest");

  StudyGame* s = new StudyGame(1);
  s->addQuestion(q);
  s->addQuestion(q1);

  EXPECT_NE(s->questionsarr[1], nullptr);
}

int main(int argc, char** argv)
{
  ::testing::InitGoogleTest(&argc, argv);

  // Run tests
  return RUN_ALL_TESTS();

  return 0;
}