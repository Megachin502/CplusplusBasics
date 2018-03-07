/* 
 *Author: Elvis Lam
 *Student ID: 301285572
 */

#include <iostream>
using namespace std;

int main() {
    
    const double diet_soda_sweetner = .001;
    int diet_soda_pop_cans;
    double sweetner_mouse, weight_mouse, sweetner_dieter, weight_dieter;

    while (weight_dieter > 0)
    {
        cout << "---------------------------------------------------------------\n";
    cout << "Enter the amount of artificial sweetner needed to kill a mouse: ";
    cin >> sweetner_mouse;
    
    cout << "Enter the weight of the mouse in grams: ";
    cin >> weight_mouse;
    
    cout << "Enter the weight of the dieter in grams in which dieting activties will be stopped: ";
    cin >> weight_dieter;
    
    sweetner_dieter = (sweetner_mouse/weight_mouse) * weight_dieter;
    diet_soda_pop_cans = (sweetner_dieter/diet_soda_sweetner);
    
    cout << "The amount of artificial sweetner that would kill the dieter is " << diet_soda_pop_cans << " grams." << endl;
    }
            
    
           
    return 0;
}

