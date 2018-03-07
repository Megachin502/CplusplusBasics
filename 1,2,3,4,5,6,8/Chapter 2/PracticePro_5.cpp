/* 
 *Author: Elvis Lam
 *Student ID: 301285572
 */

#include <iostream>
using namespace std;
int main()
{        
    double radius, vm;
    cout << "Enter radius of a sphere: ";
    cin >> radius;
    
    vm = (4/3)*3.1415*(3*radius);
    cout << "The volume is: " << vm << endl;
    
    
    return 0;
}