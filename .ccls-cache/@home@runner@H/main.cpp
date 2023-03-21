#include <iostream>
#include "questions/question1.cpp"

using namespace std;

char letter; // It can be to choose a letter like yes or no
string wrongchoicemsg = "Incorrect choice. Please retype a letter.\n"; // Letters don't recongize will see this message
string inputanswer = "Enter a letter: "; // It will asked you to answer it

void incorrectchoice() 
{
  cout << wrongchoicemsg;

  cout << "Are you ready to answer these questions? (y/n)\n";
  cout << inputanswer;
  cin >> letter;

  if (letter == 'Y' || letter == 'y')
  {
    
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
    quiz();
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
