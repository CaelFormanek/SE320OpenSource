#pragma once
#include <string>
#include <iostream>

class Tester
{
  public:
    Tester(); // constructor
    ~Tester(); // destructor
    void assertEq(std::string testname, void* a, void* b); // tests if two values are the same
    void assertEqInt(std::string testname, int a, int b); // tests if ints are the same
    void assertEqStr(std::string testname, std::string a, std::string b); // tests if strings are the same
};