/*Write a program that reads in a length in feet and inches and outputs the
equivalent length in meters and centimeters. Use at least three functions:
one for input, one or more for calculating, and one for output. Include a
loop that lets the user repeat this computation for new input values until
the user says he or she wants to end the program. There are 0.3048 meters
in a foot, 100 centimeters in a meter, and 12 inches in a foot.*/
#include <iostream>
using namespace std;
void input(double *feet_par,double *inches_par);
void calculations(double *feet_par, double *inches_par, double *meters_par, double *centimeters_par);
void output(double *meters_par, double *centimeters_par);
double const metersInAFoot=.3048, centimetersInAMeter=100, inchesInAFoot=12;
int main(){
    double feet=0;
    double inches=0;
    double meters=0;
    double centimeters=0;
    bool repeat=1;
    while(repeat==1){
        input(&feet,&inches);
        calculations(&feet,&inches,&meters,&centimeters);
        output(&meters,&centimeters);
        cout << "\nRepeat? y/n";
        char check;
        cin >> check;
        if(check=='y'){
            repeat=1;
        }else{
            repeat=0;
        }
    }
}
void input(double *feet_par,double *inches_par){
    cout << "Input feet: ";
    cin >> *feet_par;
    cout << "Input Inches: ";
    cin >> *inches_par;
}
void calculations(double *feet_par, double *inches_par, double *meters_par, double *centimeters_par){
    *meters_par=*feet_par*metersInAFoot;
    *centimeters_par=(*inches_par/inchesInAFoot)*metersInAFoot*centimetersInAMeter;
}
void output(double *meters_par, double *centimeters_par){
    cout << "Meters: " << *meters_par << endl;
    cout << "Centimeters: " << *centimeters_par << endl;
}