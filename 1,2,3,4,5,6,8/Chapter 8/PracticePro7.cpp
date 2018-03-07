/*Write a program that inputs two string variables, first and last , each of
which the user should enter with his or her name. First, convert both strings
to all lowercase. Your program should then create a new string that contains
the full name in Pig Latin with the first letter capitalized for the first and last
name. The rules to convert a word into Pig Latin are as follows:
If the first letter is a consonant, move it to the end and add “ay” to the end.
If the first letter is a vowel, add “way” to the end.
For example, if the user inputs “Erin” for the first name and “Jones” for
the last name, then the program should create a new string with the text
“Erinway Onesjay” and print it.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string firstName;
    cout << "Input first name: ";
    cin >> firstName;
    transform(firstName.begin(), firstName.end(), firstName.begin(),(int (*)(int))tolower);
    cout << "Input last name: ";
    string lastName;
    cin >> lastName;
    transform(lastName.begin(), lastName.end(), lastName.begin(),(int (*)(int))tolower);
    cout << "Pig Latin: ";
    if(firstName.front()=='a'||firstName.front()=='e'||firstName.front()=='i'||firstName.front()=='o'||firstName.front()=='u'){
        firstName.front()=toupper(firstName.front());
        cout << firstName << "way ";
    }else{
        firstName.at(1)=toupper(firstName.at(1));
        for(int i=1; i<firstName.size();i++){
            cout << firstName.at(i);
        }
        cout << firstName.at(0) <<"ay ";
    }
    if(lastName.front()=='a'||lastName.front()=='e'||lastName.front()=='i'||lastName.front()=='o'||lastName.front()=='u'){
        lastName.front()=toupper(lastName.front());
        cout << lastName << "way";
    }else{
        lastName.at(1)=toupper(lastName.at(1));
        for(int i=1; i<lastName.size();i++){
            cout << lastName.at(i);
        }
        cout << lastName.at(0) <<"ay";
    }



}