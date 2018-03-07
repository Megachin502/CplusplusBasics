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
    
    int repeat=1;
    while (repeat=1){
    cout << "---------------------------\n";
    cout << "Enter annual salary: ";
    cin >> annual_salary;
    
    double six_month_salary, six_month_increase, new_salary_per_month;
    six_month_salary = annual_salary/2;
    six_month_increase = (six_month_salary * increase) + annual_salary;
    new_salary_per_month = six_month_increase/12;
    cout << "With a 6 month salary increase of 7.6%, the new annual salary will be " << six_month_increase
         << " and the new salary per month will be " << new_salary_per_month << endl;
            
    }
    return 0;
}

