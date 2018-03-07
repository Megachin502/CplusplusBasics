#include <iostream>
using namespace std;
//You have invented a vending machine capable of deep frying twinkies.
//Write a program to simulate the vending machine. It costs $3.50 to buy a
//        deep-fried twinkie, and the machine only takes coins in denominations of
//        a dollar, quarter, dime, or nickel. Write code to simulate a person putting
//        money into the vending machine by repeatedly prompting the user for the
//        next coin to be inserted. output the total entered so far when each coin is
//inserted. When $3.50 or more is added, the program should output “Enjoy
//        your deep-fried twinkie” along with any change that should be returned.
//Use top-down design to determine appropriate functions for the program.

int main(){
    double coin=0;
    double priceTwinkie=3.50;
    cout << "Insert coin: ";
    cin >> coin;
    while (priceTwinkie-coin > 0.00){
        priceTwinkie = priceTwinkie - coin;
        cout << "Remaining: " << priceTwinkie;
        cout << "\nInsert coin: ";
        cin >> coin;

    }
    cout << "Enjoy your twinkie!";
    if (priceTwinkie-coin<0)
        cout << "=Change: " << -(priceTwinkie-coin);
    else
        cout << "=Change: " << priceTwinkie-coin;

}