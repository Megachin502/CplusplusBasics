/*a. Compute the median of a data file. The median is the number that
has the same number of data elements greater than the number as
there are less than the number. for purposes of this problem, you are
to assume that the data is sorted (that is, is in increasing order). The
median is the middle element of the file if there are an odd number
of elements, or the average of the two middle elements if the file has
an even number of elements. You will need to open the file, count
the elements, close the file and calculate the location of the middle
of the file, open the file again (recall the “start over” discussion in
this chapter), count up to the file entries you need, and calculate the
middle.
If your instructor has assigned this problem, ask for a data file to test
your program with. Otherwise, construct several files on your own, in-
cluding one with an even number of data points, increasing, and one
with an odd number, also increasing.
b. for a sorted file, a quartile is one of three numbers: The first has one-
fourth the data values less than or equal to it, one-fourth the data values
between the first and second numbers, one-fourth the data points be-
tween the second and the third, and one-fourth above the third quartile.
find the three quartiles for the data file you used for part (a).
(Hint: You should recognize that having done part (a) you have one-
third of your job done—you have the second quartile already. You also
should recognize that you have done almost all the work toward finding
the other two quartiles as well.)*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    // a)
    ifstream dataFile("dataFile.txt");
    vector<int>numbers;
    int tempNumbers;
    while(dataFile>>tempNumbers){
        numbers.push_back(tempNumbers);
    }
    cout << "Median: " << numbers.at(numbers.size()/2) << endl;
    // b)
    cout << "First Quartile: " << numbers.at(numbers.size()/4) << endl;
    cout << "Second Quartile: " << numbers.at(numbers.size()*(2/4.0))<< endl;
    cout << "Third Quartile: " << numbers.at(numbers.size()*(3/4.0))<< endl;
    cout << "Fourth Quartile: " << numbers.at(numbers.size()-1)<< endl;
    dataFile.close();
}