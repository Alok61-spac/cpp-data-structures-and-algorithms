// different syntax of vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // empty vector
    vector<char> letter;
    // initialisation of a vector
    vector<int> roll_number = {1, 2};
    cout << "Enter your mark  roll number  " << roll_number[0] << endl;
    // specific sized vector
    vector<int> marks(2);
    for (int index = 0; index < 2; index++)
    {
        cin >> marks[index];
        cout << "mark is " << marks[index] << endl;
    }
    // specific size with particular number
    vector<string> number(4, "Thanks");
    cout << number[0] << number[1] << number[2] << number[3];
    return 0;
}