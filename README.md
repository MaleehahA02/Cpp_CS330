# Cpp_CS330

## Language Overview

### History
C++ was developed at Bells Laboratories by Bjarne Stroustrup in 1979. Originally, C++ was known as “C with Classes” because it was created to add object-oriented programming to the language of C. In 1983, the name was changed to C++. The language became a commercial product in 1985, with its first compiler being Cfront. A few things C++ is used in are developing operating systems, browsers, applications, and game programming. 

## Getting Started

### Installation on MacOS
I used Visual Studio Code as my programming environment, but other environments that are good to run C++ in are Code::Blocks and Eclipse. 

To install Visual Studio Code, use https://code.visualstudio.com/download and download the one for your operating system. My operating system is MacOS.

To run C++ on VSCode (Visual Studio Code) you will need to install a few extensions. Install the C/C++ and C/C++ Extension Pack by Microsoft. 

If you are still having trouble running C++, then also install an extension called Code Runner by Jun Han. 

To make sure that the program runs in the terminal, click on the gear (settings icon) on the Code Runner extension and click on Extension Settings as shown in the image below.

<img width="346" alt="Screenshot 2023-12-22 at 5 38 11 AM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/8e2d32aa-0007-4fed-a117-c5566ce2afd7"> </br>


In the settings search bar, look up terminal and make sure the checkbox is ticked off for Run in Terminal as shown in the image below. 


<img width="800" alt="Screenshot 2023-12-22 at 5 40 35 AM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/3a10e58e-316e-4813-9a77-09ad3b3ca603">



### Running a Program 

To run a C++ program, find the run/play button in the top right corner. Click on the downwards arrow next to the run/play button, and select Run Code.

<img width="305" alt="Screenshot 2023-12-22 at 5 43 34 AM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/7ca65c57-1e2b-48ee-b017-a5ea41f38372">



### Hello World

To create a Hello World program in C++, type in the following code:

    #include <iostream> // header file library to input and output objects

    int main() { // main function

        std::cout << "Hello World!"; // print function
        
        return 0; // exit function
   
    } 

Output:

    Hello World!
    

`#include iostream`: iostream stands for input-output stream. It is the header file library to input and output objects </br>
`int main()`: declare the main function </br>
`std` : use built-in functions, variables from the standard library </br>
`cout` : Stands for "character output". print method in C++ </br>
`<<` : insertion operator, used with cout </br>
`return 0`: The main() function returns 0 if the program was successfully executed </br>


### Writing Comments
To write single line comments in C++, start with two forward slashes //.
To write multi line comments, start the comment with /* and end the comment with */.

## Data Types and Naming Conventions

### Data Types:
`int` - Integer (whole number) <br />
`float` - Floating point number (decimals) <br />
`double` - Floating point number (decimals) <br />
`char` - Characters <br />
`bool` - boolean (true or false values) <br />
`string` - String (text or sequence of characters) <br />

C++ uses both floats and doubles for decimals. The float type holds values up to 7 digits. The double type holds values up to 15 digits.

Input:

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
`myNum` <br /> 
`my_number` <br /> 
`cats3` <br /> 

Examples of invalid identifiers are:<br /> 
My number (cannot contain a space)<br /> 
34unicorns (cannot begin with a digit)<br /> 
switch (cannot use a keyword)<br /> 


### Reserved Words:
Reserved words are words that cannot be used as variables or constants in C++ because they already hold a purpose. <br />
Keywords only contain alphabetic characters and start with a lowercase letter. There are 95 reserved words. Here is a list of the reserved keywords from https://en.cppreference.com/w/cpp/keyword.

<img width="439" alt="Screenshot 2023-11-13 at 10 10 50 AM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/48399511-1a31-45ce-8af6-67e316b59b42">




Is C++ statically or dynamically typed? <br /> 
    C++ is statically typed. This means that type checking occurs at compile time. <br />
    
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


#### Adding Int and Float Types

In C++, you can add int and float types. The result will be a float type.

Input: 
       
    #include <iostream>
    using namespace std;
    
    int main() {
      int a = 5;
      float b = 7.5; 
      cout << a + b;
      return 0;
    }
    
Output:

    12.5

#### Dividing Int and Float Types

In C++, you can divide int and float types. The result will be a float type.

Input: 
       
    #include <iostream>
    using namespace std;
    
    int main() {
      int a = 7.5;
      float b = 2; 
      cout << a/b;
      return 0;
    }
    
Output:

    3.5

#### Adding Int and String Types

In C++, you cannot add int and string types. This will result in an error.

Input: 

    #include <iostream>
    using namespace std;
    
    int main() {
      int a = 30;
      string b = "5";
      string c = a + b;
      return 0;
    }

Ouput:

        Error

## Loops and Functions

There are 3 different kinds of loops in C++: `for`, `while`, `do/while`.

### For 
For loops are entry controlled loops, which means the condition is tested before entering the loop. 
Here is an example of a how a for loop is used to print out numbers from 0 to 10.

In the example below, a for loop is used to print numbers between 1 and 10. The variable `i` is created and set to 0. The statement `i < 11` sets the condition, so that for as long as i is less than 11, the loop will continue to execute. Once i is equal to 11, the loop will stop and no more numbers will be printed. The `i++` increments the value of `i` by 1 every time it goes through the loop.

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

Here is an example of a how a while loop is used to print out numbers from 0 to 10. The variable `i` is initialized and set to 0. ` while (i < 11)` means that the loop will continue to execute as long as the value of i is less than 11. The value of `i` is incremented by 1 after the value of i is printed. 

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
* To create a function, its return value must be stated. In this case, its return value is `void` which means it does not have a return value. You can use int, string, void, etc.
* To call the function, write the name of the function followed by () and ;. To call the function in this case, you would write `myFunction();`

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
There are many ways to split strings in C++. The example below uses the `strtok()` function. 

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
C++ functions can be passed by reference or by value. </br>

C++ uses pass by value by default. When functions are called with arguments that are passed by value, copies of the value are made and used inside the function. Any changes that are made to variables within the function will have no affect on the original variables. 

C++ can also use pass by reference. When functions are with arguments passed by reference, the memory address of variables is passed. Unlike pass by value, [ass by reference does not create copies when modifying a variable, thus any changes made to the variables inside the function will affect the original variables when it is called. 

Below is an example of both pass by value and pass by reference in C++. 

Input:

    //Code taken from https://www.bogotobogo.com/cplusplus/valuevsreference.php#:~:text=C%2B%2B%20uses%20call%2Dby%2Dvalue,mimic%20call%2Dby%2Dreference. 
    #include <iostream>
    using namespace std;

    //Pass by value
    template<class T>
    void swapVal(T obj1, T obj2) {
    	T temp = obj1;
    	obj1 = obj2;
    	obj2 = temp;
    }
    
    //Pass by reference
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

The function swapVal swaps the values of obj1 and obj2 using the variable temp. Since the objects are passed by value, the changes made inside the function do not affect in the original variables a and b in the main function. So after calling swapVal(a, b), the values of a and b in the main function remain unchanged.

For the swapRef function, the objects obj1 and obj2 are passed by reference using the & symbol. The swapRef function swaps the values of obj1 and obj2 using the variable temp. But since the objects are passed by reference, the changes made inside the function affect the original variables a and b in the main function. Thus, after calling swapRef(a, b), the values of a and b in the main function are swapped.


#### Multiple Parameters

Input:

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

Output:

    Aliza Khan. 12 years old. 
    Noor Khan. 40 years old. 
    Zaid Khan. 45 years old. 


The code defines a function called `myFunction`. This function takes two parameters: a string `fname` and an integer `age`. Inside the function, it prints the value of `fname`, followed by the string "Khan.", then the value of age, and finally a newline character `\n`.

The main function, the myFunction is called three times with different arguments. As a result, the function prints the names and ages of three individuals.


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

### Short-Circuit Logic

#### AND

Input: 

    #include <iostream>
    using namespace std;
    
    int main() {
      if (1 == 2 && 3 == 3) {
             cout << "(1 == 2 && 3 == 3) is true";
          } 
          else {
             cout<< "(1 == 2 && 3 == 3) is false";
          }
      return 0;
    }

Output:

    (1 == 2 && 3 == 3) is false

#### OR

Input:

    #include <iostream>
    using namespace std;
    
    int main() {
      if (3 == 3 || 1 == 2) {
             cout <<"(3 == 3 || 1 == 2) is true";
             } 
         else {
             cout <<"(3 == 3 || 1 == 2) is false";
          }
      return 0;
    }


Output:

    (3 == 3 || 1 == 2) is true


    
## Classes and Inheritance

### Classes and Objects

Classes: </br>
A class is defined using the keyword `class` followed by the name of the class.

Objects: </br>
Objects are an instance of a class.

Syntanx for declaring objects:</br>
`ClassName ObjectName;`

(Table taken from [W3Schools](https://www.w3schools.com/cpp/cpp_oop.asp)) </br>
<img width="700" alt="Screenshot 2023-12-05 at 2 46 10 PM" src="https://github.com/MaleehahA02/Cpp_CS330/assets/144168274/bc192725-87af-4d54-92cb-f59486b0ec3b">


### Person Object

Input: 

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

Output:

    John 45
    Jane 35

### Inheritance
Inheritance is when a class inherit attributes and methods from one another class. The child (derived class) inherits from the parent (base class). 

To use inheritance in C++, the symbol : (colon) is used. </br>
To have a class inherit another class, you would write as such: </br>

    class `Child_class_name` : public `Parent_class_name`

In the example below, the child class "Appointment" inherits the attributes of the parent class "Person".

Input:

    #include <iostream>
    #include <string>
    using namespace std;

    //Parent (Base) Class
    class Person {
      public:
        string name;
        int age;
    };

     //Child (Derived) Class
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

Person as the parent (base) class and Appointment as the child (derived) class. The Appointment class inherits the attributes (name and age) from the Person class.

The Person class has two public members: name of type string and age of type int. </br>
The Appointment class is derived from the Person class using the public access specifier. It adds three other attributes: location, date, and time, all of type string. </br>
In the main() function, two objects of the Appointment class, appt1 and appt2, are created. </br>
The details of both appointments are printed out using cout.  </br>


## Multiple Inheritance

A Child class can inherit attributes and methods from more than one Parent class.

Input:

    #include <iostream>
    #include <string>
    using namespace std;
    
    // First Parent (Base) Class
    class Person {
      public:
        string name;
        int age;
    };
    
    // Second Parent (Base) Class
    class Event {
      public:
        string location;
        string date;
        string time;
    };
    
    // Child (Derived) Class - Inherits from both the Person and Event classes
    class Appointment : public Person, public Event {
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
https://www.oreilly.com/library/view/object-oriented-programming/9789332503663/xhtml/head-0045.xhtml#:~:text=C%2B%2B%20was%20developed%20by%20Bjarne,it%20as%20C%2B%2B%20in%201983. </br>
https://www.geeksforgeeks.org/history-of-c/ </br>
https://www.programiz.com/cpp-programming </br>
https://www.w3schools.com/cpp/cpp_intro.asp </br>
https://www.freecodecamp.org/news/c-plus-plus-map-explained-with-examples/  </br>
https://faculty.cs.niu.edu/~mcmahon/CS241/Notes/passing_by_value.html#:~:text=A%20copy%20of%20the%20argument's,arguments%20in%20the%20calling%20function.  </br>


