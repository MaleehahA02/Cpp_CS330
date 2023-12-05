#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name; //Attribute (string variable)
    int age; //Attribute (int variable)
};

int main() {
  Person p1Obj; //Create an object of the Person class
  p1Obj.name = "John"; //Access attributes and set values
  p1Obj.age = 45;

  Person p2Obj; //Create an object of the Person class
  p2Obj.name = "Jane";  //Access attributes and set values
  p2Obj.age = 35;
 
  //Print attribute values for each of the objects
  cout << p1Obj.name << " " << p1Obj.age << "\n";
  cout << p2Obj.name << " " << p2Obj.age << "\n";
 
  return 0;
}

/*
Output:
John 45
Jane 35
*/
