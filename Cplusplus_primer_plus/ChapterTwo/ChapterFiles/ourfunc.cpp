// practice defining our own function
#include <iostream>
using namespace std;

// prototype function
void simon(int);

// main func
int main()
{
    int count;
    simon(3);
    cout << "Pick an integer: ";
    cin >> count;
    simon(count);
    return 0;
}
// user defined function
void simon(int count)
{
    cout << "Simon says touch your toes " << count << " times\n";
}