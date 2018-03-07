/*Write a program that takes its input from a file of numbers of type double
and outputs the average of the numbers in the file to the screen. The file
contains nothing but numbers of type double separated by blanks and/or
line breaks. If this is being done as a class assignment, obtain the file name
from your instructor.*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;



int main(){
    ifstream dataFile("dataFile.txt");
    if(dataFile.fail()){
        cout << "Error reading file";
        exit(1);
    }
    double tempNumbers;
    vector<double>numbers;
    while(dataFile>>tempNumbers){
        numbers.push_back(tempNumbers);
    }
    double sum=0;
    for(int i=0;i<numbers.size();i++){
        sum+=numbers.at(i);
    }
    cout << "Average: " << sum/numbers.size();
    dataFile.close();
    return 0;
}

