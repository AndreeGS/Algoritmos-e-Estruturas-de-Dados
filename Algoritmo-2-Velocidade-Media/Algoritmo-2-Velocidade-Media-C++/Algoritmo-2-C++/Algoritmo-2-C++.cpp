#include <iostream>

using namespace std;

int main()
{
    int distance, time;
    double Speed;

    cout << "Welcome to the Algorithm two!\n";
    cout << "In this algorithm, I try to exemplify how to calculate the average velocity" << endl;

    cout << "In the first moment, we will read tha values of distance in meters and time" << endl;

    cout << "Please, insert the value of the distance in meters: " << endl;
    cin >> distance;

    cout << "Please, insert the value of the time in seconds : " << endl;
    cin >> time;

    Speed = distance / time;

    cout << "The average speed is " << Speed << " m/s " << endl;


    return 0;
}

