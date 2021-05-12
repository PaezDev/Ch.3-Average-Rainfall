//  Programming challenge #4 in Ch.3
#include <iostream>

using namespace std;

int main ()
{
    string month1, month2, month3;
    double rain1 = 0, rain2 = 0, rain3 = 0;
    
    cout << "Enter a month: " << endl;
    cin >> month1;
    cout << "What was the amount of rain (in inches) that fell: " << endl;
    cin >> rain1;
    cout << "Enter a month: " << endl;
    cin >> month2;
    cout << "What was the amount of rain (in inches) that fell: " << endl;
    cin >> rain2;
    cout << "Enter a month: " << endl;
    cin >> month3;
    cout << "What was the amount of rain (in inches) that fell: "<< endl;
    cin >> rain3;
    
    double average = (rain1 + rain2 + rain3) / 3;
    
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3    << " is\n" << average << endl;
    return 0;
    
    
    
}
