// Program 16: Write a program that inputs salary. If salary is 20000 or more, it deducts 7% of salary. If salary is 10000 or more or more but less than 20000, it deducts 1000. If salary is less than 10000, it deducts nothing and then displays net salary.
#include <iostream>
using namespace std;
int main() {
    double salary, netSalary;
    cout << "Enter the salary: $";
    cin >> salary;
    if (salary >= 20000) {
        netSalary = salary * 0.93;  
    } else if (salary >= 10000) {
        netSalary = salary - 1000; 
    } else {
        netSalary = salary;  
    }
    cout << "Net salary after deductions: $" << netSalary << endl;

    return 0;
}