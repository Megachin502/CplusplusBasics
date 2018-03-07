#include <iostream>
using namespace std;
int main(){
    //Output celsius and fahrenheit, from 0-celsius:100
    int celsius=0;
    int fahrenheit=0;
    //Loop to 0-100 celsius
    while (celsius<=100){
        fahrenheit=((9*celsius)/5)+32;
        cout << "Celsius: " << celsius << " = Fahrenheit: " << fahrenheit << endl;
        celsius++;
    }









    return 0;
}
