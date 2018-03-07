/* 
*Author: Elvis Lam
*Student ID: 301285572
*/

#include <iostream>
using namespace std;
int main()
{
    int quarters,dimes,nickels,total;
    cout << "[Small Change Counter] by Elvis Lam\n";
    cout << "Insert how many of the indicated coin you have, then press enter.\n";
    cout << "*Enter the number of QUARTERS: ";
    cin >> quarters;
    
    cout << "*Enter the number of DIMES: ";
    cin >> dimes;
    
    cout << "*Enter the number of NICKELS?: ";
    cin >> nickels;
    
    total = 25*quarters + 10*dimes + 5*nickels;
    
    cout << "Total = ";
    cout << total;
    cout << " cents\n";
   
    return 0;
}

  