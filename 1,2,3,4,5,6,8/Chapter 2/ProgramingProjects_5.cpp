//Elvis lam
//301285572
//ela46@sfu.ca

#include <iostream>
using namespace std;
int main () {
    int const repeat=1;
    while (repeat) {
cout << "-------------------\n";
        //Enter maximum capacity for meeting room so it doesnt go against firelaw regulations.
        int roomCapacity = 0;
        cout << "Enter room capacity: ";
        cin >> roomCapacity;
        //Enter number of people attending meeting.
        int attendingMeeting = 0;
        cout << "Enter number of people attending the meeting: ";
        cin >> attendingMeeting;

        //Tells it its legal or not, if legal, tells how many more can enter, if not legal, says how many people over.
        int excessPeople = attendingMeeting - roomCapacity;
        if (attendingMeeting > roomCapacity) {
            cout << "Capacity overcapped, it is against firelaw regulations, please remove " << excessPeople <<
            " people.\n";
        }
        else {
            cout << "Room capacity can hold everyone under firelaw regulations\n";
        }
    }



        return 0;
}
