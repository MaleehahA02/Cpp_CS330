// This code example was taken and modified from https://www.w3schools.com/cpp/cpp_function_multiple.asp
#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Khan. " << age << " years old. \n";
}

int main() {
  myFunction("Aliza", 12);
  myFunction("Noor", 40);
  myFunction("Zaid", 45);
  return 0;
}

//Output:
/*
Aliza Khan. 12 years old. 
Noor Khan. 40 years old. 
Zaid Khan. 45 years old.
*/
