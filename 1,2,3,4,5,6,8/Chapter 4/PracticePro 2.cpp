/*Modify your program from Practice Program 1 so that it will take input
data for two cars and output the number of miles per gallon delivered by
each car. Your program will also announce which car has the best fuel ef-
ficiency (highest number of miles per gallon).*/
#include <iostream>
using namespace std;
double const litersPerGallon=3.78541;
double numberMilesPerGallon(double gasolineConsumed_par, double milesTravelled_par);
double numberMilesPerGallon2(double gasolineConsumed_par2, double milesTravelled_par2);
int main(){
    int repeat=1;
    while(repeat==1){
        cout << "Liters of gasoline comsumed for car 1: ";
        double gasolineConsumed=0;
        cin >> gasolineConsumed;
        cout << "Liters of gasoline comsumed for car 2: ";
        double gasolineConsumed2=0;
        cin >> gasolineConsumed2;
        double milesTravelled=0;
        cout << "Number of miles travelled for car 1: ";
        cin >> milesTravelled;
        double milesTravelled2=0;
        cout << "Number of miles travelled for car 2: ";
        cin >> milesTravelled2;
        double car1 = numberMilesPerGallon(gasolineConsumed,milesTravelled);
        cout << "Total for car 1: " << car1;
        cout << " Miles per Gallon." << endl;
        double car2 = numberMilesPerGallon2(gasolineConsumed2,milesTravelled2);
        cout << "Total for car 2: " << car2;
        cout << " Miles per Gallon." <<endl << endl;
        if(car1>car2){
            cout << "Car 1 has better fuel efficiency.\n";
        }
        else{
            cout << "Car 2 has better fuel efficiency.\n";
        }
    }
}
double numberMilesPerGallon(double gasolineConsumed_par, double milesTravelled_par){
    double gasolineConsumed=(gasolineConsumed_par/litersPerGallon)*milesTravelled_par;
    return gasolineConsumed;
}

double numberMilesPerGallon2(double gasolineConsumed_par2, double milesTravelled_par2){
    double gasolineConsumed=(gasolineConsumed_par2/litersPerGallon)*milesTravelled_par2;
    return gasolineConsumed;
}