


#include <iostream>
using namespace std;
int main (){
int const repeat=1;
while(repeat) {
    cout << "----------------------------------\n";
    //Ask for cost of item.
    double costofItem = 0;
    cout << "Enter the current cost of the item: ";
    cin >> costofItem;

    //Number of years from now the item will be purchased.
    double numberofYearsItemWillBePurchased = 0;
    cout << "Enter in how many years from now that you will purchase the item: ";
    cin >> numberofYearsItemWillBePurchased;

    //Ask for the rate of inflation in percents.
    double rateofInflationPercent;

    cout << "Enter rate of inflation of the item: ";
    cin >> rateofInflationPercent;
    double rateofInflationDecimal = rateofInflationPercent / 100;

    //Expected cost.
    double increasePriceOfItem = costofItem * (rateofInflationDecimal * numberofYearsItemWillBePurchased);
    double futureCost = costofItem + increasePriceOfItem;
    cout << "The item will cost " << futureCost << " in " << numberofYearsItemWillBePurchased << " years.\n";

}





    return 0;
}

