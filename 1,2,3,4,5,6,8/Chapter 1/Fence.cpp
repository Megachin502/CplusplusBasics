/* 
 *Author: Elvis Lam
 *Student ID: 301285572
 */

#include <iostream>
using namespace std;
int main() 
{
    int width_of_fencing,height_of_a_fencing,total_length_of_fence;

    cout << "Hello\n";
    
    cout << "Enter the width of fencing:\n";
    cin >> width_of_fencing;
    
    cout << "Enter the height of fencing:\n";
    cin >> height_of_a_fencing;
    
    total_length_of_fence = width_of_fencing * height_of_a_fencing;
    cout << "If you have ";
    cout << width_of_fencing;
    cout << " width of fencing\n";
    cout << "and height of ";
    cout << height_of_a_fencing;
    cout << " fencing, then\n";
    cout << "you need ";
    cout << total_length_of_fence;
    cout << " length of fence.\n";
    
    cout << "Good-bye";


    return 0;
}

