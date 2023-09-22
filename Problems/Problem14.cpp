// Program 14: Write a program that inputs a number and finds whether it is even or odd using if-else structure.
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) 
    cout << number << " is even\n" ;
    else 
    cout << number << " is odd\n";
    
    return 0;
}