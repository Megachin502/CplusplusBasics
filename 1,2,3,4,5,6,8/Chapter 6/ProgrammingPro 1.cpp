/*Write a program to generate personalized junk mail. The program takes
input both from an input file and from the keyboard. The input file con-
tains the text of a letter, except that the name of the recipient is indicated
by the three characters #N# . The program asks the user for a name and then
writes the letter to a second file but with the three letters #N# replaced by
the name. The three-letter string #N# will occur exactly once in the letter.
(Hint: have your program read from the input file until it encoun-
ters the three characters #N# , and have it copy what it reads to the
output file as it goes. When it encounters the three letters #N# , it then
sends output to the screen asking for the name from the keyboard.
You should be able to figure out the rest of the details. Your program
should define a function that is called with the input- and output-file
streams as arguments. If this is being done as a class assignment, ob-
tain the file names from your instructor.)
harder version (using material in the optional section “file names as
Input”): Allow the string #N# to occur any number of times in the file.
In this case, the name is stored in two string variables. for this version,
assume that there is a first name and last name but no middle names
or initials.*/
#include <iostream>
#include <fstream>
using namespace std;
void takeInMail(ifstream &mailDataIn_par,ofstream &mailDataOut_par);
int main(){
    ifstream mailDataIn("dataFileStart.txt");
    if(mailDataIn.fail()){
        cout << "Error opening data in";
        exit(1);
    }
    ofstream mailDataOut("dataFileEnd.txt");
    if(mailDataOut.fail()){
        cout << "error opening data out";
        exit(1);
    }
    takeInMail(mailDataIn,mailDataOut);
    mailDataIn.close();
    mailDataOut.close();
}
void takeInMail(ifstream &mailDataIn_par,ofstream &mailDataOut_par){
    string text;
    while(getline(mailDataIn_par,text)){
        if(text.find("#N#") != string::npos){
            string name;
            cout << "Input name: ";
            getline(cin,name);
            mailDataOut_par<<name<<endl;


        }else{
            mailDataOut_par<<text<<endl;
        }
    }
}

