/*Write a program to compute numeric grades for a course. The course records
are in a file that will serve as the input file. The input file is in exactly the fol-
lowing format: each line contains a student’s last name, then one space, then
the student’s first name, then one space, then ten quiz scores all on one line.
The quiz scores are whole numbers and are separated by one space. Your
program will take its input from this file and send its output to a second file.
The data in the output file will be the same as the data in the input file except
that there will be one additional number (of type double ) at the end of each
line. This number will be the average of the student’s ten quiz scores. If this is
being done as a class assignment, obtain the file names from your instructor.
use at least one function that has file streams as all or some of its arguments.*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void computeAverage(ifstream &dataIn_par, ofstream &dataOut_par);
int main(){
    ifstream dataIn("dataFileStart.txt");
    if(dataIn.fail()){
        cout << "Error opening data in";
        exit(1);
    }
    ofstream dataOut("dataFileEnd.txt");
    if(dataOut.fail()){
        cout << "error opening data out";
        exit(1);
    }
    computeAverage(dataIn, dataOut);
    dataIn.close();
    dataOut.close();
}
void computeAverage(ifstream &dataIn_par, ofstream &dataOut_par){
    string name;
    getline(dataIn_par,name);
    dataOut_par<<name<<endl;
    cout << name << endl;
    getline(dataIn_par,name);
    cout << name << endl;
    dataOut_par<<name<<endl;
    vector<int>numbers;
    int tempNumber=0;
    while(dataIn_par>>tempNumber){
        numbers.push_back(tempNumber);
    }
    double sum=0;
    for(int i=0;i<numbers.size();i++){
        cout << numbers.at(i) << " ";
        dataOut_par<<numbers.at(i)<<" ";
        sum+=numbers.at(i);
    }
    cout << endl << sum/numbers.size();
    dataOut_par << endl << sum/numbers.size();
}