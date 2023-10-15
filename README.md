# Cpp_CS330

## Language Overview

### History
C++ was developed at Bells Laboratories by Bjarne Stroustrup in 1979. Originally, C++ was known as “C with Classes” because it was created to add object-oriented programming to the language of C. In 1983, the name was changed to C++. The language became a commercial product in 1985, with its first compiler being Cfront. A few things C++ is used in are developing operating systems, browsers, applications, and game programming. 

## Getting Started

### Installation on MacOS
I used Visual Studio Code as my programming environment, but other environments that are good to run C++ in are Code::Blocks and Eclipse. 

To install Visual Studio Code, use https://code.visualstudio.com/download and download the one for your operating system. 

To run C++ on VSCode (Visual Studio Code) you will need to install a few extensions. Install the C/C++ and C/C++ Extension Pack by Microsoft. If you are still having trouble running C++, then also install an extension called Code Runner by Jun Han. 

#### "Hello World" program

Type in the following code:

    #include <iostream>

    int main() {

    std::cout << "Hello World!";
    
    return 0;
    }


### Writing Comments
To write single line comments in C++, start with two forward slashes //.
To write multi line comments, start the comment with /* and end the comment with */.

## Data Types and Naming Conventions

### Data Types:
int - Integer (whole number) <br />
float - Floating point number (decimals) <br />
double - Floating point number (decimals) <br />
char - Characters <br />
bool - boolean (true or false values) <br />
string - String (text or sequence of characters) <br />

C++ uses both floats and doubles for decimals. The float type holds values up to 7 digits. The double type holds values up to 15 digits.

    #include <iostream>
    #include <string>
    using namespace std;
     
    int main () {
      int a = 25;               
      float b = 7.50;     
      double c = 10.25;   
      char d = 'M';         
      bool e = true;       
      string f = "My name is";   
       
      // To print the values of the variables
      cout << "int: " << a << "\n";
      cout << "float: " << b << "\n";
      cout << "double: " << c << "\n";
      cout << "char: " << d << "\n";
      cout << "bool: " << e << "\n";
      cout << "string: " << f << "\n";
     
      return 0;
    }

Ouput:

    int: 25
    float: 7.5
    double: 10.25
    char: M
    bool: 1
    string: My name is

#### Arrays

To create an array containing strings, you must type string before the variable, as shown below:

Input:

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main() {
      string animals[] = {"cat", "dog", "rabbit", "horse", "fish"};
      cout << animals[0]; //prints the value at index 0
      return 0;
    }


Output:

    cat


To create an array containing integers, you must have int before the variable, as shown below:

Input:

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main() {
      int num[] = {30, 60, 90};
      cout << num[2]; //prints the value at index 2
      return 0;
    }

Ouput:

    90


#### Maps

C++ maps store elements in a key-value pair. 

Here is an example of a map:

Input:

    #include <iostream>
    #include <map>
    using namespace std;

    int main() {
    
    map<int, string> cat;

    cat[1] = "Siamese";
    cat[2] = "Persian";
    cat[3] = "British Shorthair";
    cat[4] = "Siberian";

    for (int i = 1; i <= cat.size(); ++i) {
        cout << "Cat[" << i << "]: " << cat[i] << endl;
    }

    return 0;
    }


Output:

    Cat[1]: Siamese
    Cat[2]: Persian
    Cat[3]: British Shorthair
    Cat[4]: Siberian


### Naming Conventions:
When creating identifiers, their names cannot start with a number or a special character. They must start with an alphabetic character. Identifier names can only contain alphabetic characters, digits, or underscores. They cannot contain any other kind of special characters. Keywords or reserved words cannot be used as the name of an identifier. 

Examples of valid identifiers are: <br /> 
myNum <br /> 
my_number <br /> 
cats3 <br /> 

Examples of invalid identifiers are:<br /> 
My number (cannot contain a space)<br /> 
34unicorns (cannot begin with a digit)<br /> 
switch (cannot use a keyword)<br /> 


### Reserved Words:
Reserved words are words that cannot be used as variables or constants in C++ because they already hold a purpose. <br />
Keywords only contain alphabetic characters and start with a lowercase letter. There are 95 reserved words. 

asm<br />
auto <br />
break <br />
case <br />
catch <br />
char <br />
class <br />
const <br />
continue <br />
default <br />
delete <br />
do <br />
double <br />
else <br />
enum <br />
extern <br />
float <br />
for <br />
friend <br />
goto <br />
if <br />
inline <br />
int <br />
long <br />


Is C++ statically or dynamically typed? <br /> 
    C++ is statically typed. <br />
    
Strongly typed or weakly typed? <br />
    C++ is strongly typed. <br />
    
Explicitly typed or implicitly typed? <br />
    C++ is explicitly typed.

Mutable or Immutable? <br />
    Mutable variables mean that their values or data can be change after declaration, where as immutable variables cannot be changed.<br /> 
    C++ is mutable, but if you want to declare an object as immutable, then use const or constexpr when defining the object. 





## Loops and Functions

There are 3 different kinds of loops in C++: for, while, do/while.

### For 
For loops are entry controlled loops, which means the condition is tested before entering the loop. 
Here is an example of a how a for loop is used to print out numbers from 0 to 10.

Input:

    #include <iostream>
    using namespace std;
    
    int main() {
        //starting at 0, increment i by 1 so that i is less than 11
      for (int i = 0; i < 11; i++) {

        cout << i << "\n"; //prints each number on a new line
      }
      return 0;
    }

Ouput:

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
    

### While 
While loops are also entry controlled loops.
Here is an example of a how a while loop is used to print out numbers from 0 to 10.

Input:

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

### Do/While
Unlike the for and while loop, do/while loops are exit controlled loops, which means the condition is tested at the end of the loop body. The body of the loop with execute at least once, regardless if the the condition is true or false. 
Here is an example of a how a do/while loop is used to print out numbers from 0 to 10.

Input:

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

### Functions:

Below is an example of a function that takes in 2 numbers, multiplies them, and returns the output.

Input:

    #include <iostream>
    using namespace std;
    
    int main() {
      double num1, num2, answer;
      cout << "Please enter two numbers: ";
    
      // stores the 2 numbers the user inputs in num1 and num2 respectively
      cin >> num1 >> num2;
     
      // calculates the product and stores the value in answer
      answer = num1 * num2;  
    
      cout << "Answer = " << answer;    
        
      return 0;
    }


#### Recursive Functions

Input:

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

Output:

    15


    
#### Sources
https://www.oreilly.com/library/view/object-oriented-programming/9789332503663/xhtml/head-0045.xhtml#:~:text=C%2B%2B%20was%20developed%20by%20Bjarne,it%20as%20C%2B%2B%20in%201983. 
https://www.geeksforgeeks.org/history-of-c/ 
https://www.programiz.com/cpp-programming 
https://www.w3schools.com/cpp/cpp_intro.asp 


