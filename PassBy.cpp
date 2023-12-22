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

//Output

/*
    Value:
    1: a = 100 b = 200
    2: a = 100 b = 200
    
    Reference:
    1: a = 300 b = 400
    2: a = 400 b = 300

*/
