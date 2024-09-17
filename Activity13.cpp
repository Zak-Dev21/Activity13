
#include <iostream>

using namespace std;

int main()
{
    // declaring variables needed to get user input and calculate the average
    int num_list;
    double sum = 0.0; // initiate sum variable which will calculate sum of temperatures
    double temperature_given;
    double avg;

    // Asking uder to set limit for how many temperatures to enter
    cout << "Enter enter the number of temperatures you plan to enter: " << endl;
    cin >> num_list;

    
    // loop will continuously add temperatures to sum variable in order to get full sum
    for (int i = num_list; i > 0; i--) {
        cout << "Enter temperature: ";
        cin >> temperature_given;
        sum += temperature_given;
    }
    
    avg = sum / num_list; // average mathematical formula used

    cout << "The average for the temperatures you entered is " << avg << endl;
    
}

