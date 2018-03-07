/*Write a program that outputs the lyrics for the song “ninety-nine Bottles
of Beer on the Wall.” Your program should print the number of bottles in
English, not as a number. for example:
 ninety-nine bottles of beer on the wall,
ninety-nine bottles of beer,
Take one down, pass it around,
ninety-eight bottles of beer on the wall.
…
one bottle of beer on the wall,
one bottle of beer,
Take one down, pass it around,
Zero bottles of beer on the wall.
Design your program with a function that takes as an argument an integer
between 0 and 99 and returns a string that contains the integer value in
English. Your function should not have 100 different if-else statements!
Instead, use % and / to extract the tens and ones digits to construct the English
string. You may need to test specifically for values such as 0, 10–19, etc.*/

#include <iostream>
using namespace std;
int main(){
    cout << "Insert number of beers: ";
    int number;
    cin >> number;
    cout << number << " bottles of beer on the wall,\n";
    cout << number << " bottles of beer,\n";
    cout << "Take one down, pass it around,\n";
    cout << number-1 << " bottles of beer on the wall.\n";

}