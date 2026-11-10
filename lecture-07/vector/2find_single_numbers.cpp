#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {8, 9, 3, 6, 9, 2, 8, 4, 9, 2, 8, 9};
    for (int index = 0; index < numbers.size(); index++)
    {
        int count = 0;
        for (int index2 = 0; index2 < numbers.size(); index2++)
        {
            if (numbers[index] == numbers[index2])
            {
                count++;
            }
        }
        if (count <= 1)
        {
            cout << numbers[index] << endl;
        }
    }
    return 0;
}