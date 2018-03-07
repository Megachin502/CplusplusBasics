/*Write a program that will search a file of numbers of type int and write the
largest and the smallest numbers to the screen. The file contains nothing
but numbers of type int separated by blanks or line breaks. If this is being
done as a class assignment, obtain the file name from your instructor.*/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream textFile("dataFile.txt");
    if(!textFile.is_open()){
        cout << "Error reading file";
        exit(1);
    }
    int numbers=0;
    int largest=0;
    textFile>>largest;
    int smallest=0;
    textFile>>smallest;
    while(textFile>>numbers){
        if(numbers>largest){
            largest=numbers;
        }
        if(numbers<smallest){
            smallest=numbers;
        }
    }
    cout << "Largest: "<< largest << endl;
    cout << "Smallest: "<< smallest;

    textFile.close();
    return 0;
}