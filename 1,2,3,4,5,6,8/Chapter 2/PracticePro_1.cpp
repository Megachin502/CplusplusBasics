/* 
 *Author: Elvis Lam
 *Student ID: 301285572
 */

#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    double breakfast_cereal_ounces, breakfast_cereal_metricTons;

    while (breakfast_cereal_ounces > 0)
    {
        cout << "---------------------------------------------------------------\n"
             << "What is the weight of the package of breakfast cereal in ounces? ";
        
        cin >> breakfast_cereal_ounces; 
    
        breakfast_cereal_metricTons = breakfast_cereal_ounces / 35273.92;
    
        cout << "Metric tons = " << breakfast_cereal_metricTons << endl;
    
        int boxes;
    
        boxes = breakfast_cereal_metricTons / 1;
        cout << "Cereal boxes = " << boxes << endl;
    }        
            
    return 0;
}

