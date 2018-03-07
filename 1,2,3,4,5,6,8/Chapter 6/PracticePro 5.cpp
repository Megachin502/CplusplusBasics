/*Write a program that gives and takes advice on program writing. The pro-
gram starts by writing a piece of advice to the screen and asking the user to
type in a different piece of advice. The program then ends. The next person
to run the program receives the advice given by the person who last ran
the program. The advice is kept in a file, and the contents of the file change
after each run of the program. You can use your editor to enter the initial
piece of advice in the file so that the first person who runs the program
receives some advice. Allow the user to type in advice of any length so that
it can be any number of lines long. The user is told to end his or her advice
by pressing the Return key two times. Your program can then test to see
that it has reached the end of the input by checking to see when it reads
two consecutive occurrences of the character '\n'.*/
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream dataFile_in("dataFile.txt");
    if(dataFile_in.fail()){
        cout << "Error opening file";
        exit(1);
    }
    string advice;
    cout << "Advice: ";
    while(dataFile_in>>advice){
        cout << advice << " ";
    }
    cout << "\nInput new advice: ";
    ofstream dataFile_out("dataFile.txt");
    string newAdvice;
    getline(cin,newAdvice);
    dataFile_out<<newAdvice;
    dataFile_in.close();










    return 0;
}