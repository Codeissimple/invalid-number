#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Enter a number between -50 and 50: ";
  cin >> number;

  if (number < -50 || number > 50)
    cout << "The number entered is invalid" << endl;

  else{
      if (number == 0)
        cout << "The number is 0" << endl;
      else {

        if (number % 2 == 0)
          cout << "the number is even " << endl;
        else
          cout << "the number is odd " << endl;

        if (number < 0)
          cout <<"the number is negative" << endl;
        else
          cout <<"the number is positive" << endl;
        }
      }
  return 0;
}