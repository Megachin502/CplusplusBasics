#include <iostream>
using namespace std;
int main(){

    int total,cardsinHand,value;
    char cardValue, cardValueChars;
    cout << "Enter number of cards in hand excluding Aces(2-5): ";
    cin >> cardsinHand;
    cout << "[Cards 2-9 = 2,3,4,5,6,7,8,9] [Cards 10-Ace = t,j,q,k,a]\n";

    for(int n=1;n<=cardsinHand;n++) {
        cout << "Input card values: ";
        cin >> cardValue;
        if (cardValue == '2') {
            value = 2;
            total = total + value;
        } else if (cardValue == '3') {
            value = 3;
            total = total + value;
        } else if (cardValue == '4') {
            value = 4;
            total = total + value;
        } else if (cardValue == '5') {
            value = 5;
            total = total + value;
        } else if (cardValue == '6') {
            value = 6;
            total = total + value;
        } else if (cardValue == '7') {
            value = 7;
            total = total + value;
        } else if (cardValue == '8') {
            value = 8;
            total = total + value;
        } else if (cardValue == '9') {
            value = 9;
            total = total + value;
        } else if (cardValue == 't','j','q','k') {
            value = 10;
            total = total + value;
        }
    }

    int numberofAces;
    cout << "How many aces do you have? ";
    cin >> numberofAces;
    if (numberofAces==1){
        if(total<10){
            value=11;
            total=total+value;
        }else{
            value=1;
            total=total+value;
        }
    }else if(numberofAces==2){
        if(total<10){
            value=12;
            total=total+value;
        }else{
            value=2;
            total=total+value;
        }
    }else if(numberofAces==3){
        if(total<10){
            value=13;
            total=total+value;
        }else{
            value=3;
            total=total+value;
        }
    }else if(numberofAces==4) {
        if (total < 10) {
            value = 14;
            total = total + value;
        } else {
            value = 4;
            total = total + value;
        }
    }

    cout << "Total: " << total;
    if(total>21){
        cout << "\nBusted";
    }else if(total==21){
        cout << "\nPerfect hand";
    }

    return 0;
}
