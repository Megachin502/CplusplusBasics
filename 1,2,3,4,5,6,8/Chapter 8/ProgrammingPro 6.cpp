/*Write a program that reads in a line of text and outputs the line with all the
digits in all integer numbers replaced with 'x' . For example,
Input:
My userID is john17 and my 4 digit pin is 1234 which is secret.
Output:
My userID is john17 and my x digit pin is xxxx which is secret.
Note that if a digit is part of a word, then the digit is not changed to an
'x' . For example, note that john17 is NOT changed to johnxx . Include
a loop that allows the user to repeat this calculation again until the user
says she or he wants to end the program.*/
#include <iostream>


using namespace std;


int main(){
    cout << "Input secret text: ";
    string text;
    getline(cin,text);
    cout << "Output secret text: ";
    for(int i=0; i<text.size();i++){
        if(isalpha(text.at(i)) || isspace(text.at(i)) || text.at(i)=='.'){
            cout << text.at(i);
        }else{
            cout << "x";
        }
    }






}