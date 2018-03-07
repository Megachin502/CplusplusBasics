/*Write a function declaration for a function that computes interest on a credit
card account balance. The function takes arguments for the initial balance,
the monthly interest rate, and the number of months for which interest must
be paid. The value returned is the interest due. Do not forget to compound
the interest—that is, to charge interest on the interest due. The interest due
is added into the balance due, and the interest for the next month is com-
puted using this larger balance. Use a while loop that is similar to (but need
not be identical to) the one shown in Display 2.14. Embed the function in
a program that reads the values for the interest rate, initial account balance,
and number of months, then outputs the interest due. Embed your function
definition in a program that lets the user compute interest due on a credit
account balance. The program should allow the user to repeat the calculation
until the user says he or she wants to end the program.*/

#include <iostream>
using namespace std;
void creditCardCalculations(double initialBalance_par, double monthlyInterestRate_par, double monthsInterestMustBePaid_par);
int main(){
    bool repeat=true;
    while(repeat){
        cout << "\nInput initial balance: ";
        double initialBalance=0;
        cin >> initialBalance;
        cout << "Input monthly interest rate: ";
        double monthlyInterestRate=0;
        cin >> monthlyInterestRate;
        cout << "Input months interest must be paid: ";
        double monthsInterestMustBePaid=0;
        cin >> monthsInterestMustBePaid;
        creditCardCalculations(initialBalance,monthlyInterestRate,monthsInterestMustBePaid);
        cout << "\n\nWant to do it again?[y/n] ";
        char yesNo;
        cin >> yesNo;
        repeat = yesNo == 'y';
    }
}
void creditCardCalculations(double initialBalance_par, double monthlyInterestRate_par, double monthsInterestMustBePaid_par){
    while(monthsInterestMustBePaid_par>0){
        double InterestDue=((initialBalance_par+InterestDue)*monthlyInterestRate_par);
        cout << "\nInterest due for month " << monthsInterestMustBePaid_par << ": " <<InterestDue;
        monthsInterestMustBePaid_par--;
    }
}
