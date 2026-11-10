// Write a function to find targeted number in vector.
#include <iostream>
#include <vector>
using namespace std;

void find_number(vector<int> &list, int targeted_number)
{
    for (int index = 0; index < list.size(); index++)
    {
        if (list[index] == targeted_number)
        {
            cout << "Targeted number " << targeted_number << " found at index " << index << ".";
            break;
        }
    }
}
int main()
{
    vector<int> list = {6, 8, 3, 83, 9, 2, 5};
    int targeted_number = 3;
    find_number(list, targeted_number);
    return 0;
}