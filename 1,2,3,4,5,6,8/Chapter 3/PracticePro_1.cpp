#include <iostream>
using namespace std;
int main() {
    int repeat;
    while (repeat) {
        cout << "-----------------------------\n"
        << "2 Player Rock, Paper, Scissor\n"
        << "-----------------------------\n";

        //2 users input P, R, or S
        char p1, p2;
        cout << "Player 1, please enter your choice [R/P/S]: ";
        cin >> p1;
        cout << "Player 2, please enter your choice [R/P/S]: ";
        cin >> p2;

        //toupper= changes lowercase to uppercase
        p1 = toupper(p1);
        p2 = toupper(p2);

        //Output results
        if (p1 == p2)
            cout << "Nobody wins\n\n";
        else {
            switch (p1) {
                case 'R': {
                    if (p2 == 'S')
                        cout << "Rock smashes scissor, player 1 wins\n\n";
                    else
                        cout << "Paper covers rock, player 2 wins\n\n";
                    break;
                }
                case 'P': {
                    if (p2 == 'S')
                        cout << "Scissor cuts paper, player 2 wins\n\n";
                    else
                        cout << "Paper covers rock, player 1 wins\n\n";
                    break;
                }
                case 'S': {
                    if (p2 == 'P')
                        cout << "Scissor cuts paper, player 1 wins\n\n";
                    else
                        cout << "Rock smashes scissor, player 2 wins\n\n";
                    break;
                }

            }
        }
    }
    return 0;
}