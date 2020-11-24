//Jason Kim CS201 lab34

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <iomanip>
using std::setw;
using std::setfill;

// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time {

public:
// ***** Time: constructors *****
    Time() : _hr{12}, _min{0}, _sec{0}
    {}
    Time(int hr, int min, int sec) : _hr{ hr }, _min{ min }, _sec{ sec }
    {}
    
// ***** Time: general public member functions *****

    void print() const
    {
        cout <<setfill('0') <<setw(2)<<_hr<<":" << setw(2) <<_min<<":" << setw(2) <<_sec;  // DUMMY
        // TODO: Write this!
    }

// ***** Time: data members *****
private:

    int _hr;   // Hours past midnight
    int _min;  // Minutes past the hour
    int _sec;  // Seconds past the minute

};  // End class Time


int main()
{
    // Print header
    cout << "Here are some times:" << endl;
    cout << endl;

    // Make a Time object; print it
    Time t1;
    Time t2(7, 7, 7);
    cout << "Time #1: [";
    t1.print();
    // the object has type qualifiers that are not compatible with the member function
    cout << "]" << endl;
    cout << endl;
    cout << "Time #2: [";
    t2.print();
    cout << "]" << endl;
    cout << endl;
    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n') ;
}

