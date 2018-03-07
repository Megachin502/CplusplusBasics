#include <iostream>
using namespace std;

//void test(float &b){
//    b=5;
//
//}




int main(){
    int repeat=1;
    while(repeat==1){
        double b= static_cast<double>(15/10);
//    test(b);
        cout << b;
        cout << "\ny/n:";
        char yesNo;
        cin >> yesNo;
        if(yesNo=='n'){
            break;
        }
    }


}