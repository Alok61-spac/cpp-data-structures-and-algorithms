// reverse an integer n.
#include <iostream>
using namespace std;

int reverse(int n)
{
    int answer = 0;
    while (n > 0)
    {
        int remainder = n % 10;
        answer = (answer * 10) + remainder;
        n /= 10;
    }
    return answer;
    cout << answer;
}
int main()
{
    cout << reverse(156);
    return 0;
}