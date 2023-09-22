// Program 13: Write a program that inputs temperature in Fahrenheit and convert it into Celsius.

#include <iostream>
using namespace std;
int main()
{
    int celsius, fahrenheit;
    cout << "Temperature in Fahrenheit is:";
    cin >> fahrenheit;
    // Formula to convert fahrenheit into celsius scale
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "The conversion of fahrenheit into celsius scale is:" << celsius;
    return 0;
}