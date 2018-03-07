#include <iostream>
using namespace std;
int main(){


    //Input weight in ibs
    double weight;
    cout << "Input weight in pounds: ";
    cin >> weight;

    //Input height in inches
    double height;
    cout << "Input height in inches: ";
    cin >> height;

    //Input age in years
    int age;
    cout << "Input age in years: ";
    cin >> age;

    //Input gender M or F
    char male {'m'};
    cout << "Enter gender(m or f): ";
    cin >> male;


    //Calculate->output BMR for men: BmR = 66 + (6.3 × weight in pounds) + (12.9 × height in inches) – (6.8 × age in years), output how many chocolate bars(230cal per bar) can be consumed to maintain weight
    if (male=='m'){
        double bmrMale=66+(6.3*weight)+(12.9*height)-(6.8*age);
        cout << "BMR: " << bmrMale << endl;
        double chocolateBarsCanConsume=bmrMale/230;
        cout << "You can consume: " << chocolateBarsCanConsume  << " chocolate bars to maintain your weight.";

    }

    // Calculate->output BMR for woman: BmR = 655 + (4.3 × weight in pounds) + (4.7 × height in inches) – (4.7 × age in years), output how many chocolate bars(230cal per bar) can be consumed to maintain weight
    else {
        double bmrFemale=665+(4.3*weight)+(4.7*height)-(4.7*age);
        cout << "BMR: " << bmrFemale << endl;
        double chocolateBarsCanConsume=bmrFemale/230;
        cout << "You can consume: " << chocolateBarsCanConsume  << " chocolate bars to maintain your weight.";


    }


    return 0;
}


