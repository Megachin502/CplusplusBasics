/* 
 *Author: Elvis Lam
 *Student ID: 301285572
 */

#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
   
    const double increase = .076;
    double annual_salary;
    int months;
    
    int repeat=1;
    while (repeat=1){
    cout << "---------------------------\n";
    cout << "Enter annual salary: ";
    cin >> annual_salary;
    cout << "Enter months of retrospective salary: ";
    cin >> months;
    
    double x_month_salary, x_month_increase, new_salary_per_month, x;
    
    x = 12/months;
    x_month_salary = annual_salary/x;
    x_month_increase = (x_month_salary * increase) + annual_salary;
    new_salary_per_month = x_month_increase/12;
    
    cout << "With a " << months << " month salary increase of 7.6%, the new annual salary will be " << x_month_increase
         << " and the new salary per month will be " << new_salary_per_month << endl;
            
    }
    return 0;
}

