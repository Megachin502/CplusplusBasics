#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //Column numbers between 2 to 100
    for (int i=2; i<100; i++)
        //Testing for primes
        for (int j=2; j*j<=i; j++)
        {
            //If the number is can evenly divide, then it is not a prime
            if (i % j == 0)
                break;
                //test for prime
            else if (j+1 > sqrt(i)) {
                cout << i << " ";
            }
        }
    return 0;
}