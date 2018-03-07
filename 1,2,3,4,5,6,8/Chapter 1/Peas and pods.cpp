/* 
 *Author: Elvis Lam
 *Student ID: 301285572
 */

#include <iostream>
using namespace std;
int main()
{
    int number_of_pods,peas_in_a_pod,total_peas;

    cout << "Hello\n";
    
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_in_a_pod;
    
    total_peas = number_of_pods * peas_in_a_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_in_a_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " in all the pods.\n";
    
    cout << "Good-bye";
    
    return 0;
}
