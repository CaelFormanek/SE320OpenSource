#include "Game.h"

Game::Game(int numquestions)
{
  this->numquestions = numquestions;
  questionsarr = new Question*[numquestions];
}

Game::~Game()
{
  for (int i = 0; i < numquestions; i++)
  {
    delete questionsarr[i];
  }
  delete[] questionsarr;
}

void Game::play()
{

}