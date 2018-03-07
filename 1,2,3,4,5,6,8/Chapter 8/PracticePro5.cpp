/*Write a function named swapFrontBack that takes as input a vector of inte-
gers. The function should swap the first element in the vector with the last
element in the vector. The function should check if the vector is empty to
prevent errors. Test your function with vectors of different length and with
varying front and back numbers.*/
#include <iostream>
#include <vector>
using namespace std;

void swapFrontBack(vector<int> intergers_par);

int main() {
    vector<int> intergers;
    int inputInterger;
    while (inputInterger != -1) {
        cout << "Input intergers, -1 to exit: ";
        cin >> inputInterger;
        intergers.push_back(inputInterger);
        if (inputInterger == -1) {
            intergers.pop_back();
        }
    }
    if(intergers.size()==0){
        cout << "Empty Vector";
        return 0;
    }
    cout << "Output: ";
    for (int i = 0; i < intergers.size(); i++) {
        cout << intergers.at(i);
    }
    cout << endl;
    swapFrontBack(intergers);
}

void swapFrontBack(vector<int> intergers_par) {
    swap(intergers_par.front(), intergers_par.back());
    cout << "Swapped: ";
    for (int i = 0; i < intergers_par.size(); i++) {
        cout << intergers_par.at(i);
    }
}