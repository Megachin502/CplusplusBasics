/* 
 *Author: Elvis Lam
 *Student ID: 301285572
 */

#include <iostream>
using namespace std;

int main() 
{

    float number = 0, estimation = 1;
    cout << "What number do you want to find the square root? ";
    cin >> number;        

    
    for (int x=0; x < 100; x++){
        cout << "Iteration # " << x + 1;
    
    estimation = (estimation + (number/estimation))/2;
    cout << ": Estimation = " << estimation << endl;
    }
    return 0;
}

