/*The area of an arbitrary triangle can be computed using the formula
area = sqrt(s(s – a)(s – b)(s – c))
where a, b, and c are the lengths of the sides, and s is the semiperimeter.
s = (a + b + c)/2
Write a void function that computes the area and perimeter (not the
semiperimeter) of a triangle based on the length of the sides. The function
should use five parameters—three value parameters that provide the lengths
of the edges and two reference parameters that store the computed area
and perimeter. Make your function robust. Note that not all combinations
of a, b, and c produce a triangle. Your function should produce correct
results for legal data and reasonable results for illegal combinations.*/
#include <iostream>
#include <cmath>
using namespace std;
void calculations(int a_par, int b_par, int c_par, int *area_par, int *perimeter_par);

int main(){
    bool repeat=1;
    while(repeat==1){
        cout << "Enter length of first side: ";
        int a=0;
        cin >> a;
        cout << "Enter length of second side: ";
        int b=0;
        cin >> b;
        cout << "Enter length of third side: ";
        int c=0;
        cin >> c;
        int area=0;
        int perimeter=0;
        calculations(a,b,c,&area,&perimeter);
        cout << "Area: " << area<< endl;
        cout << "Perimeter: " << perimeter << endl;
        cout << "Repeat y/n: ";
        char yesNo;
        cin >> yesNo;
        if(yesNo=='y'){
            repeat=1;
        }else{
            repeat=0;
        }
    }


}
void calculations(int a_par, int b_par, int c_par, int *area_par, int *perimeter_par){
    double semiperimeter=(a_par+b_par+c_par)/2;
    if(a_par+b_par>c_par && a_par+c_par>b_par && b_par+c_par>a_par && a_par>0 && b_par>0 && c_par>0){
        *area_par=sqrt(semiperimeter*(semiperimeter-a_par)*(semiperimeter-b_par)*(semiperimeter-c_par));
        *perimeter_par=a_par+b_par+c_par;

    }else{
        cout << "Illegal Side length used, please restart program and re-input values\n";
    }
}