#include <iostream>
#include <string>
using namespace std;
/*Write a program that inputs a first and last name, separated by a space, into a
string variable. Use the string functions to output the first and last initial.
Embed your code into a do-while loop. At the end of the loop ask the user
if he or she would like to repeat the program. Input the user’s choice into a
char using cin . If the character is ‘y’ then repeat the program, otherwise exit.
Beware of the pitfall with newlines when cin is mixed with getline */
int main() {
    bool repeat=1;
    while(repeat==1){
        cout << "Input first and last name: ";
        string name;
        getline(cin,name);
        cout << "Initials: " << name.front() << "." << name.at(name.find(" ")+1);
        cout << "\nRepeat? y/n: ";
        char yesNo;
        cin >> yesNo;
        cin.ignore();
        if(yesNo != 'y') {
            break;
        }
    }
    return 0;
}