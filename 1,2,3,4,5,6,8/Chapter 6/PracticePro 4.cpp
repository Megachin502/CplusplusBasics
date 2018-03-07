/*Write a program that takes its input from a file of numbers of type double .
The program outputs to the screen the average and standard deviation of
the numbers in the file. The file contains nothing but numbers of type
double separated by blanks and/or line breaks. The standard deviation of
a list of numbers n 1 , n 2 , n 3 , and so forth is defined as the square root of the
average of the following numbers:
(n 1 – a) 2 , (n 2 – a) 2 , (n 3 – a) 2 , and so forth
The number a is the average of the numbers n 1 , n 2 , n 3 , and so forth.
If this is being done as a class assignment, obtain the file name from
your instructor.
(Hint: Write your program so that it first reads the entire file and com-
putes the average of all the numbers, and then closes the file, then
reopens the file and computes the standard deviation.)*/
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    // a)
    ifstream dataFile("dataFile.txt");
    vector<double>numbers;
    double tempNumbers;
    double sumAvg=0;
    while(dataFile>>tempNumbers){
        numbers.push_back(tempNumbers);
        sumAvg+=tempNumbers;
    }
    double average=sumAvg/numbers.size();
    double sum=0;
    for(int i=0;i<numbers.size();i++){
        sum=sum+pow(numbers.at(i)-average,2);
    }
    double s=sqrt(sum/(numbers.size()-1));
    cout << "Standard deviation: " << s;
    dataFile.close();
}