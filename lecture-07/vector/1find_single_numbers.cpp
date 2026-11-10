#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {2, 8, 3, 1, 2, 4, 8, 8, 1, 7, 7};
    for (int index = 0; index < numbers.size(); index++)
    {
        bool is_unique = true;
        for (int index2 = 0; index2 < numbers.size(); index2++)
        {
            if (index != index2 && numbers[index] == numbers[index2])
            {
                is_unique = false;
                break;
            }
        }
        if (is_unique)
        {
            cout << numbers[index] << endl;
        }
    }
    return 0;
}