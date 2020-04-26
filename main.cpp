/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  25 APRIL 2020
  IDE: Repl.it 
  Program:  Factorial recursion
  https://repl.it/@ChetLockwood/FactorialIRLockwood
*/

#include "Input_Validation_Extended.h"

using namespace std;

double factorialIR(double num);

int main() 
{
  double input = 0.0;

  cout << "Give a number\n";
  validateDouble(input);

  cout << "The factorial of " << input << " is: ";
  cout << factorialIR(input);

  return 0;
}

double factorialIR(double num)
{
  if (num == 0)
    return 1;
  else
    return num * factorialIR(num - 1);
}