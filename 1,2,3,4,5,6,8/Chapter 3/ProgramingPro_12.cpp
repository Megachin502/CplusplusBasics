#include <iostream>
using namespace std;
int main(){

    int humanToothpick, totalToothpicks=23,falseValue=1;
    cout << "|------------------------------------------------------------|\n"
         << "|Game 23 by Elvis Lam                                        |\n"
         << "|Instructions: Start with 23 toothpicks                      |\n"
         << "|Human and computer alternate drawing toothpicks between 1-3 |\n"
         << "|Loser draws the last toothpick.                             |\n"
         << "|------------------------------------------------------------|\n";

    for(int n=0;n<=totalToothpicks;n++){
        cout << "\nEnter how many toothpicks to draw: ";
        cin >> humanToothpick;
        if(humanToothpick>3) {
            cout << "Enter a valid number between 1-3.";
            continue;
        }
        totalToothpicks=totalToothpicks-humanToothpick;
        if(totalToothpicks>4){
            totalToothpicks=totalToothpicks-humanToothpick;
            cout << "The computer draws " << humanToothpick << " = Remaining toothpicks: " << totalToothpicks;
        }else if(totalToothpicks<=4 && totalToothpicks>=2){
            if(totalToothpicks==2){
                totalToothpicks=1;
                cout << "The computer draws 1 = Remaining toothpicks: 1\n";
                cout << "Enter how many toothpicks to draw: ";
                cin >> falseValue;
                cout << "\nRemaining toothpicks: 0\n" << "Computer wins!";
                break;
            }else if(totalToothpicks==3){
                totalToothpicks=1;
                cout << "The computer draws 2 = Remaining toothpicks: 1\n";
                cout << "Enter how many toothpicks to draw: ";
                cin >> falseValue;
                cout << "\nRemaining toothpicks: 0\n" << "Computer wins!";
                break;
            }else if(totalToothpicks==4){
                totalToothpicks=1;
                cout << "The computer draws 3 = Remaining toothpicks: 1\n";
                cout << "Enter how many toothpicks to draw: ";
                cin >> falseValue;
                cout << "\nRemaining toothpicks: 0\n" << "Computer wins!";
                break;
            }
        }else if(totalToothpicks==1){
            cout << "The computer draws 1 = Remaining toothpicks: 0\n";
            cout << "Human wins!";
            break;
        }
    }

    return 0;
}
