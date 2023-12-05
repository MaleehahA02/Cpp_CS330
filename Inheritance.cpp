#include <iostream>
#include <string>
using namespace std;

class Person {
  public:
    string name;
    int age;
};

class Appointment : public Person {
  public:
    string location;
    string date;
    string time;
};

int main() {
  Appointment appt1;
  appt1.name = "John";
  appt1.age = 45;
  appt1.location = "Health Check-Up";
  appt1.date = "2023-10-21";
  appt1.time = "10:00 AM";

  Appointment appt2;
  appt2.name = "Jane";
  appt2.age = 35;
  appt2.location = "Conference Room";
  appt2.date = "2023-01-24";
  appt2.time = "3:00 PM";

  cout << "Appointment 1:\n";
  cout << "Name: " << appt1.name << "\n";
  cout << "Age: " << appt1.age << "\n";
  cout << "Location: " << appt1.location << "\n";
  cout << "Date: " << appt1.date << "\n";
  cout << "Time: " << appt1.time << "\n\n";

  cout << "Appointment 2:\n";
  cout << "Name: " << appt2.name << "\n";
  cout << "Age: " << appt2.age << "\n";
  cout << "Location: " << appt2.location << "\n";
  cout << "Date: " << appt2.date << "\n";
  cout << "Time: " << appt2.time << "\n";

  return 0;
  }

/*
Output:

Appointment 1:
Name: John
Age: 45
Location: Health Check-Up
Date: 2023-10-21
Time: 10:00 AM

Appointment 2:
Name: Jane
Age: 35
Location: Conference Room
Date: 2023-01-24
Time: 3:00 PM
*/
