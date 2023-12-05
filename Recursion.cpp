// Code modified from https://www.w3schools.com/cpp/cpp_functions_recursion.asp
#include <iostream>
using namespace std;

int sum(int n) {
  if (n > 0) {
    return n + sum(n - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(5);
  //(5+4+3+2+1+0) = 15//
  cout << result;
  return 0;
}

/*
Output:
15
*/
