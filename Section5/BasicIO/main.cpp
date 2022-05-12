//Section 5
//Basic I/O using cin and cout

#include <iostream>

using namespace std;

int main()
{
        
    //cout << "Hello World" << endl;
    
    //cout << "Hello";
    //cout << "World" << endl;
    
    //cout << "Hello world!" << endl;
    //cout << "Hello" << " world!" << endl;
    //cout << "Hello" << "world!\n";
    //cout << "Hello\nOut\nThere!\n";
    
    int num1 = 0;
    int num2 = 0;
    double num3 = 0.0;
    
//    cout << "Enter an integer: ";
//    cin >> num1;
//    cout << "You entered:" << num1 << endl;
    
//    cout << "Enter a first integer: ";
//    cin >> num1;
//    
//    cout << "Enter a second integer: ";
//    cin >> num2;
//    
//    cout << "You entered " << num1 << " and " << num2 << endl;

//    cout << "Enter 2 integers separated with space: ";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;

//    cout << "Enter a double: ";
//    cin >> num3;
//    cout << "You entered " << num3 << endl;
    
//    cout << "Enter an integer: ";
//    cin >> num1;
//    
//    cout << "Enter a double: ";
//    cin >> num3;
//    
//    cout << "You entered " << num1 << " and " << num3 << endl;

 
    string host = "Frank";
    string name = "Unknow";
    string message = "";
    cout << "Hi, nice to meet you, what's your name?" << endl;
    cin >> name;
    cout << "My name is " << name << endl;
    cout << "And you?" << endl;
    cout << "Hi " << host <<  endl;
    return 0;
}