
#include <iostream>

using namespace std;

int main()
{
    int num_list;
    double sum = 0.0;
    double temperature_given;
    double avg;

    cout << "Enter enter the number of temperatures you plan to enter: " << endl;
    cin >> num_list;

    

    for (int i = num_list; i > 0; i--) {
        cout << "Enter temperature: ";
        cin >> temperature_given;
        sum += temperature_given;
    }
    
    avg = sum / num_list;

    cout << "The average for the temperatures you entered is " << avg << endl;
    
}

