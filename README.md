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

#### Pointers

Input:

    #include <iostream>
    using namespace std;
    
    int main() {
      int num = 100;  // A int variable
      int* ptr = &num;  // A pointer variable that stores the address of num
    
      // Output the value of num
      cout << num << "\n";
    
      // Output the memory address of num
      cout << &num << "\n";
    
      // Output the memory address of num with the pointer
      cout << ptr << "\n";
      return 0;
    }

Output:

    100
    0x7ffce15e0c44
    0x7ffce15e0c44

    
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
Keywords only contain alphabetic characters and start with a lowercase letter. There are 95 reserved words. Here is a list of the reserved keywords from https://en.cppreference.com/w/cpp/keyword.

<img width="439" alt="Screenshot 2023-11-13 at 10 10 50 AM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/48399511-1a31-45ce-8af6-67e316b59b42">




Is C++ statically or dynamically typed? <br /> 
    C++ is statically typed. <br />
    
Strongly typed or weakly typed? <br />
    C++ is strongly typed. <br />
    
Explicitly typed or implicitly typed? <br />
    C++ is explicitly typed.

Mutable or Immutable? <br />
    Mutable variables mean that their values or data can be change after declaration, where as immutable variables cannot be changed.<br /> 
    C++ is mutable, but if you want to declare an object as immutable, then use const or constexpr when defining the object. 


### Operators

Arithmetic Operators (table image from [W3Schools](https://www.w3schools.com/cpp/cpp_operators.asp)):<br /> 
<img width="248" alt="Screenshot 2023-11-13 at 12 47 42 PM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/12b599d0-68f0-435e-8856-dadaec508795">

Assignment Operators (table image from [W3Schools](https://www.w3schools.com/cpp/cpp_operators_assignment.asp)):<br /> 
<img width="688" alt="Screenshot 2023-11-13 at 12 53 00 PM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/c686f99c-b534-4272-b9cf-89a612bc9909">

Comparison Operators (table image from [W3Schools](https://www.w3schools.com/cpp/cpp_operators_comparison.asp)):<br /> 
<img width="446" alt="Screenshot 2023-11-13 at 12 55 34 PM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/1d0a9119-1ef9-4404-b68f-389fcdbfc780">

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

The syntax for creating a function in C++ is as follows: </br>
 
    void myFunction() {
      // code to be executed
    }
* myFunction is the name of the function.
* To create a function, its return value must be stated. In this case, its return value is "void" which means it does not have a return value. You can use int, string, void, etc.
* To call the function, write the name of the function followed by () and ;. To call the function in this case, you would write myFunction();

Below is an example of a function that takes in 2 numbers, multiplies them, and returns the output.

Input:

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


#### Recursive Functions

Input:

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

Output:

    15



#### Split String Function

To split strings means to take a string (a sequence of characters), and divide it into single words. </br>
There are many ways to split strings in C++. The example below uses the strtok() function. 

Input: 

    //Code taken from https://www.javatpoint.com/how-to-split-strings-in-cpp 
    #include <iostream>  
    #include <cstring>  
    using namespace std;  
      
    int main()  
    {  
        char str[100]; // declare the size of string      
        cout << " Enter a string: " <<endl;  
        cin.getline(str, 100); // use getline() function to read a string from input stream  
          
        char *ptr; // declare a ptr pointer  
        ptr = strtok(str, " , "); // use strtok() function to separate string using comma (,) delimiter.  
        cout << " \n Split string using strtok() function: " << endl;  
        // use while loop to check ptr is not null  
        while (ptr != NULL)  
        {  
            cout << ptr  << endl; // print the string token  
            ptr = strtok (NULL, " , ");  
        }  
        return 0;  
    }  

Output:

    Enter a string:
    Learn how to split a string in C++ using the strtok() function.
    
     Split string using strtok() function:
    Learn
    how
    to
    split
    a
    string
    in
    C++
    Using
    the
    strtok()
    function.

#### Pass by Reference or Pass by Value?

Input:

    //Code taken from https://www.bogotobogo.com/cplusplus/valuevsreference.php#:~:text=C%2B%2B%20uses%20call%2Dby%2Dvalue,mimic%20call%2Dby%2Dreference. 
    #include <iostream>
    using namespace std;
    
    template<class T>
    void swapVal(T obj1, T obj2) {
    	T temp = obj1;
    	obj1 = obj2;
    	obj2 = temp;
    }
    
    template<class T>
    void swapRef(T& obj1, T& obj2) {
    	T temp = obj1;
    	obj1 = obj2;
    	obj2 = temp;
    }
    
    int main() 
    {
    	int a = 100, b = 200;
    	cout << "Value:" << endl;
    	cout << "1: a = " << a << " b = " << b << endl;
    	swapVal(a,b);
    	cout << "2: a = " << a << " b = " << b << endl;
    	a = 300; b = 400;
    	cout << endl;
    	cout << "Reference:" << endl;
    	cout << "1: a = " << a << " b = " << b << endl;
    	swapRef(a,b);
    	cout << "2: a = " << a << " b = " << b << endl;
    
    	return 0;
    }

Output:

    Value:
    1: a = 100 b = 200
    2: a = 100 b = 200
    
    Reference:
    1: a = 300 b = 400
    2: a = 400 b = 300
    
## Selection, Loops and Conditionals

### If Statements

If statements are used to specify a block of code to be executed, if and only if the condition is true. 

Input:

    #include <iostream>
    using namespace std;

    int main() {
      int x = 35;
      int y = 10;
      if (x > y) {
        cout << "x is greater than y.";
      }  
      return 0;
    }

Output:

    x is greater than y.

### If-Else Statements

Else statements are used to specify a block of code to be executed if the condition is false. 

Input:

    #include <iostream>
    using namespace std;

    int main() {
      int x = 35;
      int y = 50;
      if (x > y) {
        cout << "x is greater than y.";
      }  
      else {
      cout << "y is greater than x.";
      }
      return 0;
    }

Output:
   
    y is greater than x.

### Else-If Statements

Else If statements are used to specify a new condition. The block of code of the else if statement is executed if the first condition is false and the second condition is true. 

Input:

    #include <iostream>
    using namespace std;
    
    int main() {
      int x = 35;
      if (x > 50) {
        cout << "x is greater than 50.";
      }  
      else if (x < 25){
      cout << "x is less than 25.";
      }
      else {
        cout << "x is greater than 25 and less than 50.";
      }
      return 0;
    }

Ouput:

    x is greater than 25 and less than 50.
    
### Short Hand Else If: Ternary Operator

The ternary operator is used instead of if else statements so that there are less lines of code.

The syntax for using the ternary operatory is as follows:
variable = (condition) ? expressionTrue : expressionFalse;

Input:

    #include <iostream>
    #include <string>
    using namespace std;
    
    int main() {
      int x = 35;
      string result = (x < 25) ? "x is less than 25." : "x is greater than 25.";
      cout << result;
      return 0;
    }

Output:

    x is greater than 25.

### Switch

Input:

    #include <iostream>
    using namespace std;
    
    int main() {
      int day = 6;
      switch (day) {
      case 1:
        cout << "Monday";
        break;
      case 2:
        cout << "Tuesday";
        break;
      case 3:
        cout << "Wednesday";
        break;
      case 4:
        cout << "Thursday";
        break;
      case 5:
        cout << "Friday";
        break;
      case 6:
        cout << "Saturday";
        break;
      case 7:
        cout << "Sunday";
        break;
      }
      return 0;
    }

Output:

    Saturday


## Classes and Inheritance

### Classes and Objects

(Table taken from (https://www.w3schools.com/cpp/cpp_oop.asp)
<img width="955" alt="Screenshot 2023-12-05 at 2 46 10 PM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/bc192725-87af-4d54-92cb-f59486b0ec3b">


### Person Object

Input: 

    #include <iostream>
    #include <string>
    using namespace std;
    
    class Person {
      public:
        string name;
        int age;
    };
    
    int main() {
      Person p1Obj;
      p1Obj.name = "John";
      p1Obj.age = 45;
    
      Person p2Obj;
      p2Obj.name = "Jane";
      p2Obj.age = 35;
     
    
      cout << p1Obj.name << " " << p1Obj.age << "\n";
      cout << p2Obj.name << " " << p2Obj.age << "\n";
     
      return 0;
    }

Output:

    John 45
    Jane 35

### Inheritance
Inheritance is when a class inherit attributes and methods from one another class. The child (derived class) inherits from the parent (base class). 

To use inheritance in C++, the symbol : (colon) is used. 

In the example below, the child class "Appointment" inherits the attributes of the parent class "Person".

Input:

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

#### Sources
https://www.oreilly.com/library/view/object-oriented-programming/9789332503663/xhtml/head-0045.xhtml#:~:text=C%2B%2B%20was%20developed%20by%20Bjarne,it%20as%20C%2B%2B%20in%201983. 
https://www.geeksforgeeks.org/history-of-c/ 
https://www.programiz.com/cpp-programming 
https://www.w3schools.com/cpp/cpp_intro.asp 


