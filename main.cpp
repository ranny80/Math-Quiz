#include <iostream>

using namespace std;

char letter; // It can be to choose a letter like yes or no
string wrongchoicemsg = "Incorrect choice. Please retype a letter.\n"; // Letters don't recongize will see this message
string inputanswer = "Enter a letter: "; // It will asked you to answer it

int tries = 3;

void thirdtry()
{
  tries = tries - 1;

  cout << "Incorrect answer. You have out of tries."; // Getting out of tries after guessing the answer
}

void secondtry()
{
  tries = tries - 1;

  cout << "Incorrect answer. You have " << tries << " more tries remaining.";
}

void firsttry()
{
  tries = tries - 1;

  cout << "Incorrect answer. You have " << tries << " more tries remaining.";
}

void question1()
{
  // cout << "What is 16 * 8?\n a) 15\n b) 128\n c) 240\n d) 67";
  cout << "Coming Soon!";
}

void incorrectchoice() 
{
  cout << wrongchoicemsg;

  cout << "Are you ready to answer these questions? (y/n)\n";
  cout << inputanswer;
  cin >> letter;

  if (letter == 'Y' || letter == 'y')
  {
    question1();
  }
  else if (letter == 'N' || letter == 'n') 
  {
    cout << "Program terminated.";
  }
  else 
  {
    incorrectchoice(); // Letters don't recongize if you input it incorrectly
  }
}

int main() 
{
  cout << "Are you ready to answer these questions? (y/n)\n";
  cout << inputanswer;
  cin >> letter;

  if (letter == 'Y' || letter == 'y')
  {
    question1();
  }
  else if (letter == 'N' || letter == 'n')
  {
    cout << "Program terminated.";
  }
  else 
  {
    incorrectchoice(); // Letters don't recongize if you input it incorrectly
  }
}
