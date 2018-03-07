/*Write a program that converts from 24-hour notation to 12-hour notation.
For example, it should convert 14:25 to 2:25 PM. The input is given as two
integers. There should be at least three functions, one for input, one to do the
conversion, and one for output. Record the AM/PM information as a value of
type char, ‘A’ for AM and ‘P’ for PM. Thus, the function for doing the conver-
sions will have a call-by-reference formal parameter of type char to record
whether it is AM or PM. (The function will have other parameters as well.)
Include a loop that lets the user repeat this computation for new input values
again and again until the user says he or she wants to end the program.*/
#include <iostream>
#include <iomanip>
using namespace std;
void input(int *hours_par, int *minutes_par, char *morningOrNight_par);
void calculations(int *hours_par, char *morningOrNight_par);
void output(int *hours_par, int *minutes_par);
int main(){
    int hours=0;
    int minutes=0;
    char morningOrNight;
    bool repeat=1;
    while(repeat==1){
        input(&hours,&minutes,&morningOrNight);
        calculations(&hours,&morningOrNight);
        output(&hours,&minutes);
        cout << "\nRepeat? y/n: ";
        char yesNo;
        cin >> yesNo;
        if(yesNo=='y'){
            repeat=1;
        }else{
            repeat=0;
        }
    }

}
void input(int *hours_par, int *minutes_par, char *morningOrNight_par){
    cout << "Input hours: ";
    cin >> *hours_par;
    cout << "Input minutes: ";
    cin >> *minutes_par;
    cout << "Input A for am and P for PM: ";
    cin >> *morningOrNight_par;
}
void calculations(int *hours_par, char *morningOrNight_par){
    if(*morningOrNight_par=='P'){
        *hours_par=*hours_par+12;
    }else if(*morningOrNight_par=='A'){
        *hours_par=*hours_par-12;
    }
}
void output(int *hours_par, int *minutes_par){
    cout << "24 hour notation: " << *hours_par << ":" << setfill('0') << setw(2) << *minutes_par;
}