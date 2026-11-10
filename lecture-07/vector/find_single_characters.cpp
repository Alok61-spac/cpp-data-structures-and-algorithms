#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> alphabets = {'a', 'u', 'e', 'u', 'q', 'e'};
    for (int index = 0; index < alphabets.size(); index++)
    {
        int count = 0;
        for (int index2 = 0; index2 < alphabets.size(); index2++)
        {
            if (index != index2 && alphabets[index] == alphabets[index2])
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << alphabets[index] << endl;
        }
    }
    return 0;
}