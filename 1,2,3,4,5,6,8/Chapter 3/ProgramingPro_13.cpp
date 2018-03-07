#include <iostream>
using namespace std;
int main() {
    int A, B, C, D;
    bool notFound = true;
    int count = 1;
    srand(time(0));
    while (notFound)
    {
        A = rand() % 10;
        B = rand() % 10;
        C = rand() % 10;
        D = rand() % 10;
        if (count % 1000 == 0)
        {
            cout << count << "th attempt.\n";
        }
        if ((A / 3 == C) && A != B && A != C && A != D && B != C &&
            B != D && D != C && (D == 1 || D == 3 || D == 5 || D == 7 || D == 9)
            && (A + B + C + D == 27))
        {
            cout << "ADDRESS IS: " << A << B << C << D << " Pennsylvania Ave\n";
            cout << "Found on attempt " << count << endl;
            notFound = false;
        }
        ++count;
    }


    return 0;
}