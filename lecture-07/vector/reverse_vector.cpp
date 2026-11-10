// write a function to reverse a vector.
#include <iostream>
#include <vector>
using namespace std;

void reverse_vector(vector<int> &marks)
{
    int start = 0;
    int end = marks.size() - 1;
    while (start < end)
    {
        swap(marks[start], marks[end]);
        start++;
        end--;
    }
}
int main()
{
    vector<int> marks = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    reverse_vector(marks);
    for (int element : marks)
    {
        cout << element << endl;
    }
    return 0;
}