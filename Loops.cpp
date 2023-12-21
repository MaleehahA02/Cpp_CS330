//For Loops

#include <iostream>
using namespace std;

int main() {
    //starting at 0, increment i by 1 so that i is less than 11
  for (int i = 0; i < 11; i++) {

    cout << i << "\n"; //prints each number on a new line
  }
  return 0;
}

//While Loops

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 11) {
    cout << i << "\n";
    i++;
  }
  return 0;
}


// Do/While Loops

#include <iostream>
using namespace std;

int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 11);
  return 0;
}


/*
Output:

0
1
2
3
4
5
6
7
8
9
10
*/
