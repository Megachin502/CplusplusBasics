#include <iostream>
using namespace std;
int main(){
cout << "Arabic to Roman Year Converter\n" << "------------------------------\n";
    //Input year between 1100-1299
    double yearArabic=0;
    cout << "Input year between 1100-1299: ";
    cin >> yearArabic;

    //Conversion
    if(yearArabic<1000 || yearArabic>3000)
        cout << "Enter a value between 1000-3000.";
    else if(yearArabic>=1000 && yearArabic<=1999){
        cout << "Roman Numerals: M";
        double yearArabicHundreds=yearArabic/1000;
        double yearArabicTens=yearArabic/100;
        double yearArabicOnes=yearArabic/10;
        if(yearArabicHundreds>=1.1 && yearArabicHundreds<=1.199){
            cout << "C";
            if(yearArabicTens>=11.10 && yearArabicTens<=11.19){
                cout << "X";
                if(yearArabicOnes==111.1)
                    cout << "I";
                else if(yearArabicOnes==111.2)
                    cout << "II";
                else if(yearArabicOnes==111.3)
                    cout << "III";
                else if(yearArabicOnes==111.4)
                    cout << "IV";
                else if(yearArabicOnes==111.5)
                    cout << "V";
                else if(yearArabicOnes==111.6)
                    cout << "VI";
                else if(yearArabicOnes==111.7)
                    cout << "VII";
                else if(yearArabicOnes==111.8)
                    cout << "VIII";
                else if(yearArabicOnes==111.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=11.20 && yearArabicTens<=11.29){
                cout << "XX";
                if(yearArabicOnes==112.1)
                    cout << "I";
                else if(yearArabicOnes==112.2)
                    cout << "II";
                else if(yearArabicOnes==112.3)
                    cout << "III";
                else if(yearArabicOnes==112.4)
                    cout << "IV";
                else if(yearArabicOnes==112.5)
                    cout << "V";
                else if(yearArabicOnes==112.6)
                    cout << "VI";
                else if(yearArabicOnes==112.7)
                    cout << "VII";
                else if(yearArabicOnes==111.8)
                    cout << "VIII";
                else if(yearArabicOnes==112.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=11.30 && yearArabicTens<=11.39){
                cout << "XXX";
                if(yearArabicOnes==113.1)
                    cout << "I";
                else if(yearArabicOnes==113.2)
                    cout << "II";
                else if(yearArabicOnes==113.3)
                    cout << "III";
                else if(yearArabicOnes==113.4)
                    cout << "IV";
                else if(yearArabicOnes==113.5)
                    cout << "V";
                else if(yearArabicOnes==113.6)
                    cout << "VI";
                else if(yearArabicOnes==113.7)
                    cout << "VII";
                else if(yearArabicOnes==113.8)
                    cout << "VIII";
                else if(yearArabicOnes==113.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=11.40 && yearArabicTens<=11.49){
                cout << "XL";
                if(yearArabicOnes==114.1)
                    cout << "I";
                else if(yearArabicOnes==114.2)
                    cout << "II";
                else if(yearArabicOnes==114.3)
                    cout << "III";
                else if(yearArabicOnes==114.4)
                    cout << "IV";
                else if(yearArabicOnes==114.5)
                    cout << "V";
                else if(yearArabicOnes==114.6)
                    cout << "VI";
                else if(yearArabicOnes==114.7)
                    cout << "VII";
                else if(yearArabicOnes==114.8)
                    cout << "VIII";
                else if(yearArabicOnes==114.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=11.50 && yearArabicTens<=11.59){
                cout << "L";
                if(yearArabicOnes==115.1)
                    cout << "I";
                else if(yearArabicOnes==115.2)
                    cout << "II";
                else if(yearArabicOnes==115.3)
                    cout << "III";
                else if(yearArabicOnes==115.4)
                    cout << "IV";
                else if(yearArabicOnes==115.5)
                    cout << "V";
                else if(yearArabicOnes==115.6)
                    cout << "VI";
                else if(yearArabicOnes==115.7)
                    cout << "VII";
                else if(yearArabicOnes==115.8)
                    cout << "VIII";
                else if(yearArabicOnes==115.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=11.60 && yearArabicTens<=11.69){
                cout << "LX";
                if(yearArabicOnes==116.1)
                    cout << "I";
                else if(yearArabicOnes==116.2)
                    cout << "II";
                else if(yearArabicOnes==116.3)
                    cout << "III";
                else if(yearArabicOnes==116.4)
                    cout << "IV";
                else if(yearArabicOnes==116.5)
                    cout << "V";
                else if(yearArabicOnes==116.6)
                    cout << "VI";
                else if(yearArabicOnes==116.7)
                    cout << "VII";
                else if(yearArabicOnes==116.8)
                    cout << "VIII";
                else if(yearArabicOnes==116.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=11.70 && yearArabicTens<=11.79){
                cout << "LXX";
                if(yearArabicOnes==117.1)
                    cout << "I";
                else if(yearArabicOnes==117.2)
                    cout << "II";
                else if(yearArabicOnes==117.3)
                    cout << "III";
                else if(yearArabicOnes==117.4)
                    cout << "IV";
                else if(yearArabicOnes==117.5)
                    cout << "V";
                else if(yearArabicOnes==117.6)
                    cout << "VI";
                else if(yearArabicOnes==117.7)
                    cout << "VII";
                else if(yearArabicOnes==117.8)
                    cout << "VIII";
                else if(yearArabicOnes==117.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=11.80 && yearArabicTens<=11.89){
                cout << "LXXX";
                if(yearArabicOnes==118.1)
                    cout << "I";
                else if(yearArabicOnes==118.2)
                    cout << "II";
                else if(yearArabicOnes==118.3)
                    cout << "III";
                else if(yearArabicOnes==118.4)
                    cout << "IV";
                else if(yearArabicOnes==118.5)
                    cout << "V";
                else if(yearArabicOnes==118.6)
                    cout << "VI";
                else if(yearArabicOnes==118.7)
                    cout << "VII";
                else if(yearArabicOnes==118.8)
                    cout << "VIII";
                else if(yearArabicOnes==118.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=11.90 && yearArabicTens<=11.99){
                cout << "XC";
                if(yearArabicOnes==119.1)
                    cout << "I";
                else if(yearArabicOnes==119.2)
                    cout << "II";
                else if(yearArabicOnes==119.3)
                    cout << "III";
                else if(yearArabicOnes==119.4)
                    cout << "IV";
                else if(yearArabicOnes==119.5)
                    cout << "V";
                else if(yearArabicOnes==119.6)
                    cout << "VI";
                else if(yearArabicOnes==119.7)
                    cout << "VII";
                else if(yearArabicOnes==119.8)
                    cout << "VIII";
                else if(yearArabicOnes==119.9)
                    cout << "IX";
            }

        }
        else if(yearArabicHundreds>=1.2 && yearArabicHundreds<=1.299){
            cout << "CC";
            if(yearArabicTens>=12.10 && yearArabicTens<=12.19){
                cout << "X";
                if(yearArabicOnes==121.1)
                    cout << "I";
                else if(yearArabicOnes==121.2)
                    cout << "II";
                else if(yearArabicOnes==121.3)
                    cout << "III";
                else if(yearArabicOnes==121.4)
                    cout << "IV";
                else if(yearArabicOnes==121.5)
                    cout << "V";
                else if(yearArabicOnes==121.6)
                    cout << "VI";
                else if(yearArabicOnes==121.7)
                    cout << "VII";
                else if(yearArabicOnes==121.8)
                    cout << "VIII";
                else if(yearArabicOnes==121.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=12.20 && yearArabicTens<=12.29){
                cout << "XX";
                if(yearArabicOnes==122.1)
                    cout << "I";
                else if(yearArabicOnes==122.2)
                    cout << "II";
                else if(yearArabicOnes==122.3)
                    cout << "III";
                else if(yearArabicOnes==122.4)
                    cout << "IV";
                else if(yearArabicOnes==122.5)
                    cout << "V";
                else if(yearArabicOnes==122.6)
                    cout << "VI";
                else if(yearArabicOnes==122.7)
                    cout << "VII";
                else if(yearArabicOnes==121.8)
                    cout << "VIII";
                else if(yearArabicOnes==122.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=12.30 && yearArabicTens<=12.39){
                cout << "XXX";
                if(yearArabicOnes==123.1)
                    cout << "I";
                else if(yearArabicOnes==123.2)
                    cout << "II";
                else if(yearArabicOnes==123.3)
                    cout << "III";
                else if(yearArabicOnes==123.4)
                    cout << "IV";
                else if(yearArabicOnes==123.5)
                    cout << "V";
                else if(yearArabicOnes==123.6)
                    cout << "VI";
                else if(yearArabicOnes==123.7)
                    cout << "VII";
                else if(yearArabicOnes==123.8)
                    cout << "VIII";
                else if(yearArabicOnes==123.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=12.40 && yearArabicTens<=12.49){
                cout << "XL";
                if(yearArabicOnes==124.1)
                    cout << "I";
                else if(yearArabicOnes==124.2)
                    cout << "II";
                else if(yearArabicOnes==124.3)
                    cout << "III";
                else if(yearArabicOnes==124.4)
                    cout << "IV";
                else if(yearArabicOnes==124.5)
                    cout << "V";
                else if(yearArabicOnes==124.6)
                    cout << "VI";
                else if(yearArabicOnes==124.7)
                    cout << "VII";
                else if(yearArabicOnes==124.8)
                    cout << "VIII";
                else if(yearArabicOnes==124.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=12.50 && yearArabicTens<=12.59){
                cout << "L";
                if(yearArabicOnes==125.1)
                    cout << "I";
                else if(yearArabicOnes==125.2)
                    cout << "II";
                else if(yearArabicOnes==125.3)
                    cout << "III";
                else if(yearArabicOnes==125.4)
                    cout << "IV";
                else if(yearArabicOnes==125.5)
                    cout << "V";
                else if(yearArabicOnes==125.6)
                    cout << "VI";
                else if(yearArabicOnes==125.7)
                    cout << "VII";
                else if(yearArabicOnes==125.8)
                    cout << "VIII";
                else if(yearArabicOnes==125.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=12.60 && yearArabicTens<=12.69){
                cout << "LX";
                if(yearArabicOnes==126.1)
                    cout << "I";
                else if(yearArabicOnes==126.2)
                    cout << "II";
                else if(yearArabicOnes==126.3)
                    cout << "III";
                else if(yearArabicOnes==126.4)
                    cout << "IV";
                else if(yearArabicOnes==126.5)
                    cout << "V";
                else if(yearArabicOnes==126.6)
                    cout << "VI";
                else if(yearArabicOnes==126.7)
                    cout << "VII";
                else if(yearArabicOnes==126.8)
                    cout << "VIII";
                else if(yearArabicOnes==126.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=12.70 && yearArabicTens<=12.79){
                cout << "LXX";
                if(yearArabicOnes==127.1)
                    cout << "I";
                else if(yearArabicOnes==127.2)
                    cout << "II";
                else if(yearArabicOnes==127.3)
                    cout << "III";
                else if(yearArabicOnes==127.4)
                    cout << "IV";
                else if(yearArabicOnes==127.5)
                    cout << "V";
                else if(yearArabicOnes==127.6)
                    cout << "VI";
                else if(yearArabicOnes==127.7)
                    cout << "VII";
                else if(yearArabicOnes==127.8)
                    cout << "VIII";
                else if(yearArabicOnes==127.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=12.80 && yearArabicTens<=12.89){
                cout << "LXXX";
                if(yearArabicOnes==128.1)
                    cout << "I";
                else if(yearArabicOnes==128.2)
                    cout << "II";
                else if(yearArabicOnes==128.3)
                    cout << "III";
                else if(yearArabicOnes==128.4)
                    cout << "IV";
                else if(yearArabicOnes==128.5)
                    cout << "V";
                else if(yearArabicOnes==128.6)
                    cout << "VI";
                else if(yearArabicOnes==128.7)
                    cout << "VII";
                else if(yearArabicOnes==128.8)
                    cout << "VIII";
                else if(yearArabicOnes==128.9)
                    cout << "IX";
            }
            else if(yearArabicTens>=12.90 && yearArabicTens<=12.99){
                cout << "XC";
                if(yearArabicOnes==129.1)
                    cout << "I";
                else if(yearArabicOnes==129.2)
                    cout << "II";
                else if(yearArabicOnes==129.3)
                    cout << "III";
                else if(yearArabicOnes==129.4)
                    cout << "IV";
                else if(yearArabicOnes==129.5)
                    cout << "V";
                else if(yearArabicOnes==129.6)
                    cout << "VI";
                else if(yearArabicOnes==129.7)
                    cout << "VII";
                else if(yearArabicOnes==129.8)
                    cout << "VIII";
                else if(yearArabicOnes==129.9)
                    cout << "IX";
            }
        }
        else if(yearArabicHundreds>=1.3 && yearArabicHundreds<=1.399){
            cout << "CCC";
        }
        else if(yearArabicHundreds>=1.4 && yearArabicHundreds<=1.499)
            cout << "CD";
        else if(yearArabicHundreds>=1.5 && yearArabicHundreds<=1.599)
            cout << "D";
        else if(yearArabicHundreds>=1.6 && yearArabicHundreds<=1.699)
            cout << "CCC";
        else if(yearArabicHundreds>=1.7 && yearArabicHundreds<=1.799)
            cout << "DCC";
        else if(yearArabicHundreds>=1.8 && yearArabicHundreds<=1.899)
            cout << "DCCC";
        else if(yearArabicHundreds>=1.9 && yearArabicHundreds<=1.999)
            cout << "CM";
    }
    else if(yearArabic>=2000 && yearArabic<=2999)
        cout << "MM";
    else if(yearArabic==3000)
        cout << "MMM";

    return 0;
}