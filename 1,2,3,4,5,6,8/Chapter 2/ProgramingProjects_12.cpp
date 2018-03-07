#include <iostream>
using namespace std;
int main(){
int const repeat=1;
while(repeat) {
    cout << "--------------------------------------\n";
    //Input radius of well casing in inches, convert inches to feet.
    double radiusofWellCasinginInches = 0;
    cout << "Enter radius of well casing in inches: ";
    cin >> radiusofWellCasinginInches;

    double radiusofWellCasinginFeets = radiusofWellCasinginInches * 0.0833333;

    //Input depth of well in feet.
    double depthofWellinFeet = 0;
    cout << "Enter depth of well in feet: ";
    cin >> depthofWellinFeet;

    //Output number of gallons stored in well casing.
    double volumeofWell = 3.14 * (radiusofWellCasinginFeets * radiusofWellCasinginFeets) * depthofWellinFeet;
    double waterinGallons = volumeofWell * 7.48;
    cout << waterinGallons << " gallons of water stored in well casing.\n";


}

    return 0;
}
