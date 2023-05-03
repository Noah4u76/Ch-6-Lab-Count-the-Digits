//
// File: Main.cpp
// Description: Count the digits
// Created: Sun. March 26, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#include <iostream>
using namespace std;

/* TODO: Write recursive DigitCount() function here. */
int DigitCount(int num1) {
 if (num1 < 10) {
  return 1;  
 }
 else {
  return 1 + DigitCount(num1 / 10);  
 }
}

int main() {
   int num;
   int digits;

   cin >> num;
   digits = DigitCount(num);
   cout << digits << endl;
   return 0;
}
