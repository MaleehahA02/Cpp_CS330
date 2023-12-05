#include <iostream>
using namespace std;

void myMultiplication(int num1, int num2) {
  int product = num1 * num2;
  cout << product <<"\n";
}

int main() {
  myMultiplication(3,2);
  myMultiplication(5,10);
  return 0;
}

/*
Output:
6
5
*/
