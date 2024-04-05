#include "Tester.h"

Tester::Tester()
{

}

Tester::~Tester()
{

}

int Tester::assertEq(std::string testname, void* a, void* b)
{
  if (a == b)
  {
    std::cout << testname << " : Test Passed. Expected " << a << ", got " << b << std::endl;
  }
  else
  {
    std::cout << testname << " : Test Failed. Expected " << a << ", got " << b << std::endl;
    return -1;
  }
  return 1;
}

int Tester::assertEqInt(std::string testname, int a, int b)
{
  if (a == b)
  {
    std::cout << testname << " : Test Passed. Expected " << a << ", got " << b << std::endl;
  }
  else
  {
    std::cout << testname << " : Test Failed. Expected " << a << ", got " << b << std::endl;
    return -1;
  }
  return 1;
}

int Tester::assertEqStr(std::string testname, std::string a, std::string b)
{
  if (a == b)
  {
    std::cout << testname << " : Test Passed. Expected " << a << ", got " << b << std::endl;
  }
  else
  {
    std::cout << testname << " : Test Failed. Expected " << a << ", got " << b << std::endl;
    return -1;
  }
  return 1;
}