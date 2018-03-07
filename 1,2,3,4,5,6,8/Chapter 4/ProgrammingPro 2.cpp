#include <iostream>
#include <string>
using namespace std;
/*Write a program that asks for the user’s height, weight, and age, and then
computes clothing sizes according to the formulas:
■ hat size = weight in pounds divided by height in inches and all that
multiplied by 2.9.
■ Jacket size (chest in inches) = height times weight divided by 288 and then
adjusted by adding 1/8 of an inch for each 10 years over age 30. (note
that the adjustment only takes place after a full 10 years. So, there is no
adjustment for ages 30 through 39, but 1/8 of an inch is added for age 40.)
■ Waist in inches = weight divided by 5.7 and then adjusted by adding
1/10 of an inch for each 2 years over age 28. (note that the adjustment
only takes place after a full 2 years. So, there is no adjustment for age 29,
but 1/10 of an inch is added for age 30.)
Use functions for each calculation. Your program should allow the user to
repeat this calculation as often as the user wishes.*/

void hat(double weightPounds_par, double heightinInches_par, double age_par){
    double hatSize=(weightPounds_par/heightinInches_par)*2.9;
    cout << "\nHat size: " << hatSize;
}
void jacket(double weightPounds_par, double heightinInches_par, double age_par){
    double jacketSize=(heightinInches_par*weightPounds_par)/288;
    cout << "\nJacket size: " << jacketSize;
}
void waist(double weightPounds_par, double heightinInches_par, double age_par){
    double waistinInches=weightPounds_par/5.7;
    if(age_par>29){
        double changeInSize=(age_par/2)*.1;
        waistinInches=waistinInches-changeInSize;
    }
    cout << "\nWaist in inches: " << waistinInches;

}

int main(){
    double weightPounds=0;
    double heightinInches=0;
    double age=0;

    bool repeat=true;
    while (repeat){
        cout << "Enter height in Inches: ";
        cin >> heightinInches;
        cout << "Enter weight in ibs: ";
        cin >> weightPounds;
        cout << "Enter age: ";
        cin >> age;
        hat(weightPounds,heightinInches,age);
        jacket(weightPounds,heightinInches,age);
        waist(weightPounds,heightinInches,age);
        cout << "\n\nWant to do it again?[y/n] ";
        char yesNo;
        cin >> yesNo;
        repeat = yesNo == 'y';

    }




}