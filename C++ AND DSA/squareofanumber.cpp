// HW-2 LECTURE 2
// Take a number as input and show its square as output

#include <iostream>
using namespace std;
int main()
{
    float number;
    cout << "Enter a number: ";
    cin >> number;
    float square = number * number;
    cout << "The square of " << number << " is: " << square << endl;
    return 0;
}
