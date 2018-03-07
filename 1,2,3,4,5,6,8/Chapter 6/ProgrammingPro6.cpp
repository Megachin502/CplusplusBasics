/*Write a program that allows the user to type in any one-line question and
then answers that question. The program will not really pay any attention
to the question, but will simply read the question line and discard all that
it reads. It always gives one of the following answers:
I'm not sure, but I think you will find the answer in Chapter #N.
That's a good question.
If I were you, I would not worry about such things.
That question has puzzled philosophers for centuries.
I don't know. I'm just a machine.
Think about it and the answer will come to you.
I used to know the answer to that question, but I've forgotten it.
The answer can be found in a secret place in the woods.
These answers are stored in a file (one answer per line), and your program
simply reads the next answer from the file and writes it out as the answer
to the question. After your program has read the entire file, it simply
closes the file, reopens the file, and starts down the list of answers again.
Whenever your program outputs the first answer, it should replace
the two symbols #N with a number between 1 and 18 (including the
possibility of 1 and 18). In order to choose a number between 1 and 18,
your program should initialize a variable to 18 and decrease the variable’s
value by 1 each time it outputs a number so that the chapter numbers
count backward from 18 to 1. When the variable reaches the value 0 ,
your program should change its value back to 18. Give the number 17
the name NUMBER_OF_CHAPTERS with a global named constant declaration
using the const modifier.
(Hint: use the function new_line defined in this chapter.)*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main(){
    cout << "Enter Question: ";
    string question;
    getline(cin,question);
    ifstream file("dataFile.txt");
    getline(file,question);
    ofstream fileOpen("dataFile.txt");
    int counter=0;
    for(int i=0;i<question.size();i++){
        if(question.at(i)=='#'){
            counter++;
        }else if(question.at(i)=='N') {
            cout << counter;
        } else {
            cout << question.at(i);
        }
    }

    file.close();


}
