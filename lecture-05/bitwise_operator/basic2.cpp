//
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 1, c = 2;
    // bitwise leftshift(a*2^b)
    cout << (a << b) << endl;
    // bitwise rightshift(a*2^c)
    cout << (a >> c);
    return 0;
}