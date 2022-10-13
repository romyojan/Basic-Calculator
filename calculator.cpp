#include<iostream>

using namespace std;

int main() {
  //Declare Int
  int firstNumber, secondNumber, operation;
  //ask user to choose operation
  cout << "Choices:\nEnter 1 to use Addition\nEnter 2 to use Subtraction\nEnter 3 to use Multiplication\nEnter 4 to use Division" << endl;
  cin >> operation;
  //Check Operation Enter by User
  switch (operation) {
  case 1:
    cout << "Enter First Number; " << endl;
    cin >> firstNumber;
    cout << "Enter Second Number; " << endl;
    cin >> secondNumber;
    cout << "The result is: " << firstNumber + secondNumber << endl;
    break;
  case 2:
    cout << "Enter First Number; " << endl;
    cin >> firstNumber;
    cout << "Enter Second Number; " << endl;
    cin >> secondNumber;
    cout << "The result is: " << firstNumber - secondNumber << endl;
    break;
  case 3:
    cout << "Enter First Number; " << endl;
    cin >> firstNumber;
    cout << "Enter Second Number; " << endl;
    cin >> secondNumber;
    cout << "The result is: " << firstNumber * secondNumber << endl;
    break;
  case 4:
    cout << "Enter First Number; " << endl;
    cin >> firstNumber;
    cout << "Enter Second Number; " << endl;
    cin >> secondNumber;
    cout << "The result is: " << firstNumber / secondNumber << endl;
    break;
  default:
    cout << "Invalid, please refer to choices";
  }

  return 0;
}