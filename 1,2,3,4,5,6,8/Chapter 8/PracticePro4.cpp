#include <iostream>
#include <vector>
using namespace std;
/*Write a function named firstLast2 that takes as input a vector of integers.
The function should return true if the vector starts or ends with the digit
2. Otherwise it should return false . Test your function with vectors of dif-
ferent length and with the digit 2 at the beginning of the vector, end of the
vector, middle of the vector, and missing from the vector.*/
bool firstLast2(vector<int>vector_par);
int main(){
    int intergers=0;
    vector<int>vector;
    while(intergers !=-1){
        cout << "Input intergers, write -1 to stop: ";
        cin >> intergers;
        vector.push_back(intergers);
        if(intergers==-1){
            vector.pop_back();
        }
    }
    cout << "Outputs: ";
    for(int i=0; i<vector.size();i++){
        cout << vector.at(i);
    }
    cout << endl << "True/False: " << firstLast2(vector);
}

bool firstLast2(vector<int>vector_par){
    if(vector_par.front()==2 || vector_par.back()==2){
        return true;
    }else{
        return false;
    }



}

