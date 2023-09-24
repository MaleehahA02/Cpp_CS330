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

### Naming Conventions:



### Reserved Words:
Reserved words are words that cannot be used as variables or constants in C++ because they already hold a purpose. <br />
Keywords only contain alphabetic characters and start with a lowercase letter. There are 95 reserved words. 


Is C++ statically or dynamically typed? <br /> 
    C++ is statically typed. <br />
    
Strongly typed or weakly typed? <br />
    C++ is strongly typed. <br />
    
Explicitly typed or implicitly typed? <br />
    C++ is explicitly typed.

#### Sources
https://www.oreilly.com/library/view/object-oriented-programming/9789332503663/xhtml/head-0045.xhtml#:~:text=C%2B%2B%20was%20developed%20by%20Bjarne,it%20as%20C%2B%2B%20in%201983. 
https://www.geeksforgeeks.org/history-of-c/ 
https://www.programiz.com/cpp-programming 
https://www.w3schools.com/cpp/cpp_intro.asp 


