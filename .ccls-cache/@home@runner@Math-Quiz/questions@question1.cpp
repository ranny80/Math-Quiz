#include <iostream>

using namespace std;

int tries = 3;

void correctanswer()
{
  cout << "That is correct!";
}

void thirdtry()
{
  tries = tries - 1;

  cout << "That is incorrect. You have out of tries.";
}

void secondtry() 
{
  tries = tries - 1;

  cout << "That is incorrect. You have 1 tries remaining.";
}

void firsttry()
{
  tries = tries - 1;

  cout << "That is incorrect. You have 2 tries remaining.";
}

void quiz()
{

}
