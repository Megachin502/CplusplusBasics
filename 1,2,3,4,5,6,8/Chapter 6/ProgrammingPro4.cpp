/*Write a program that will compute the average word length (average num-
ber of characters per word) for a file that contains some text. A word is
defined to be any string of symbols that is preceded and followed by one
of the following at each end: a blank, a comma, a period, the beginning of
a line, or the end of a line. Your program should define a function that is
called with the input-file stream as an argument. This function should also
work with the stream cin as the input stream, although the function will
not be called with cin as an argument in this program. If this is being done
as a class assignment, obtain the file names from your instructor.*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void computeAverage(ifstream &dataIn_par);
int main(){
    ifstream textFileIn("dataFile.txt");
    if (textFileIn.fail()){
        cout << "Error reading file";
        exit(1);
    }
    computeAverage(textFileIn);
}
void computeAverage(ifstream &dataIn_par){
    string text;
    int numberOfLetters=0;
    double counter=0;
    while(dataIn_par>>text){
        numberOfLetters+=text.length();
        counter++;
        if(text=='/0'){
            exit(1);
        }
    }
    cout <<"Average word count: " << numberOfLetters/counter;
}

