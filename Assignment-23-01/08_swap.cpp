#include <iostream>
using namespace std;

int main()
{
    
    int a = 5, b = 10;

    cout << "Before " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}