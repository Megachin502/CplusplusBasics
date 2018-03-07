#include <iostream>
using namespace std;

/*A liter is 0.264179 gallons. Write a program that will read in the number
of liters of gasoline consumed by the user’s car and the number of miles
traveled by the car and will then output the number of miles per gallon the
car delivered. Your program should allow the user to repeat this calculation
as often as the user wishes. Define a function to compute the number of
miles per gallon. Your program should use a globally defined constant for
the number of liters per gallon.*/
double const litersPerGallon=3.78541;

void numberMilesPerGallon(double gasolineConsumed_par, double milesTravelled_par){
    double gasolineConsumed=(gasolineConsumed_par/litersPerGallon)*milesTravelled_par;
    cout << gasolineConsumed;
}

int main(){
    int repeat=1;
    while(repeat==1){
        cout << "Liters of gasoline comsumed: ";
        double gasolineConsumed=0;
        cin >> gasolineConsumed;
        double milesTravelled=0;
        cout << "Number of miles travelled: ";
        cin >> milesTravelled;
        cout << "Total: ";
        numberMilesPerGallon(gasolineConsumed,milesTravelled);
        cout << " Miles per Gallon." << endl << endl;
    }
}

