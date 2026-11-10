#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {7, 8, 4, 7, 3, 9, 6, 4, 9, 6, 3};
    int ans = 0;
    for (int value : numbers)
    {
        ans ^= value;
    }
    cout << ans;
}