// creating a user defined function with a return value
#include <iostream>
using namespace std;
int stonetolb(int);

int main()
{
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stones are ";
    cout << pounds << " pounds.\n";
}

int stonetolb(int stone)
{
    return stone * 14;
}