// Program 15: Write a program that inputs salary and grade. It adds 50% bonus if grade is greater than 15. It adds 25% bonus if grade is 15 or less and then displays the salary.
#include <iostream>
using namespace std;
int main()
{
    int salary,grade;
    cout<<"The salary of employes is:";
    cin >>salary;
    cout<<"Enter the value of salary  grade:";
    cin >>grade;
    if (grade>15)
    {salary += 0.5*salary;}
    else
    {salary += 0.25*salary;}
    cout <<salary;
    return 0;
}