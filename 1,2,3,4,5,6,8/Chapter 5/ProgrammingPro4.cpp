/*Write a program that tells what coins to give out for any amount of change
from 1 cent to 99 cents. For example, if the amount is 86 cents, the output
would be something like the following:
86 cents can be given as
3 quarter(s) 1 dime(s) and 1 penny(pennies)
Use coin denominations of 25 cents (quarters), 10 cents (dimes), and 1 cent
(pennies). Do not use nickel and half-dollar coins. Your program will use
the following function (among others):
void compute_coins(int coin_value, int& num, int& amount_left);
//Precondition: 0 < coin_value < 100; 0 <= amount_left < 100.
//Postcondition: num has been set equal to the maximum number
//of coins of denomination coin_value cents that can be obtained
//from amount_left. Additionally, amount_left has been decreased
//by the value of the coins, that is, decreased by
//num * coin_value.
For example, suppose the value of the variable amount_left is 86 . Then,
after the following call, the value of number will be 3 and the value of
amount_left will be 11 (because if you take 3 quarters from 86 cents, that
leaves 11 cents):
compute_coins(25, number, amount_left);
Include a loop that lets the user repeat this computation for new input
values until the user says he or she wants to end the program. (Hint: Use
integer division and the % operator to implement this function.)*/
#include <iostream>
using namespace std;
void input(int *coinValue_par);
void calculationsAndOutput(int *coinValue_par);
int main(){
    int coinValue=0;
    bool repeat=1;
    while(repeat==1){
        input(&coinValue);
        calculationsAndOutput(&coinValue);
        cout << "\nRepeat y/n: ";
        char yesNo;
        cin >> yesNo;
        if(yesNo=='y'){
            repeat=1;
        }else{
            repeat=0;
        }
    }

}
void input(int *coinValue_par){
    cout << "Input cent value from 1-99: ";
    cin >> *coinValue_par;
}
void calculationsAndOutput(int *coinValue_par){
    int quarters=*coinValue_par/25;
    int centQuarters=quarters*25;
    int dimes=(*coinValue_par-centQuarters)/10;
    int centDimes=dimes*10;
    int pennies=*coinValue_par-centQuarters-centDimes;
    cout << "Quarters: " << quarters << endl
         << "Dimes: " << dimes << endl
         << "Pennies: " << pennies << endl;
}
