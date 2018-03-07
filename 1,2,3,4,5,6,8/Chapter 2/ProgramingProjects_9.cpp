#include <iostream>
using namespace std;
int main(){

    //Input 10 numbers
    double numberInput1=0;
    double numberInput2=0;
    double numberInput3=0;
    double numberInput4=0;
    double numberInput5=0;
    double numberInput6=0;
    double numberInput7=0;
    double numberInput8=0;
    double numberInput9=0;
    double numberInput10=0;

    cout << "Input first number: ";
    cin >> numberInput1;
    cout << "Input second number: ";
    cin >> numberInput2;
    cout << "Input third number: ";
    cin >> numberInput3;
    cout << "Input fourth number: ";
    cin >> numberInput4;
    cout << "Input fifth number: ";
    cin >> numberInput5;
    cout << "Input sixth number: ";
    cin >> numberInput6;
    cout << "Input seventh number: ";
    cin >> numberInput7;
    cout << "Input eigth number: ";
    cin >> numberInput8;
    cout << "Input ninth number: ";
    cin >> numberInput9;
    cout << "Input tenth number: ";
    cin >> numberInput10;

    //Sum the numbers
    double total=numberInput1+numberInput2+numberInput3+numberInput4+numberInput5+numberInput6+numberInput7+numberInput8+numberInput9+numberInput10;
    cout << "Total: " << total;

    return 0;
}
