#include <iostream>

class MyClass
{
public:
	static int x; // declare a static data member
	static void myfunction(); // declare a static member function
};

int MyClass::x = 123; // define a static data member
// define a static member function
void MyClass::myfunction()
{
	std::cout << "Hello World from a static member function.";
}

int main()
{
	MyClass::x = 456; // access a static data member
	std::cout << "Static data member value is: " << MyClass::x;
	MyClass::myfunction(); // call a static member function
}