// testing out the square root function
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double cover;                   // using double to match the return value
    double side;
    cout << "How many squre feet of sheets do you have?" << endl;
    cin >> cover;
    side = sqrt(cover);
    cout << "You can cover a square with sides of " << side << " feet" << endl;
    cout << "with your new sheets." << endl;
    return 0;
}