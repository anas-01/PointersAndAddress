#include<iostream>
#include<string>

using namespace std;

int main()
{
  
    int givenInt = 32;
    float givenFloat = 64.212;
    double givenDouble = 4.76545;
    string givenString = "Hey look at me! I know pointers!";
    char givenChar = '*';

    int *pointerToInt = &givenInt;
    float *pointerToFloat = &givenFloat;
    double *pointerToDouble = &givenDouble;
    string *pointerToString = &givenString;
    char *pointerToChar = &givenChar;

    cout << "Pointers and Address Location";
    cout << "\n";
    cout << "\n";
 
    cout << "Value of givenInt: " << *pointerToInt << '\n';
    cout << "Address location of givenInt: " << pointerToInt << '\n';
    cout << "\n";
   
    cout << "Value of givenFloat: " << *pointerToFloat << '\n';
    cout << "Address location of givenFloat: " << pointerToFloat << '\n';
    cout << "\n";

    cout << "Value of givenDouble: " << *pointerToDouble << '\n';
    cout << "Address location of givenDouble: " << pointerToDouble << '\n';
    cout << "\n";

    cout << "Value of givenString: " << *pointerToString << '\n';
    cout << "Address location of givenString: " << pointerToString << '\n';
    cout << "\n";

    cout << "Value of givenChar: " << *pointerToChar << '\n';
    cout << "Address location of givenChar: " << pointerToChar << '\n';
    cout << "\n";

    return 0;
}