// use of different functions
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> elements = {86, 63, 92, 76, 61, 6};
    //.size() function gives size of vector
    cout << elements.size() << endl;
    //.push_back() function add given element at last index of vector
    elements.push_back(5);
    elements.push_back(56);
    //.capacity() function gives storage capacity of vectorS
    cout << elements.capacity() << endl;
    //.pop_back() function removes the last element
    elements.pop_back();
    //.front() function gives element at first index of vector
    cout << elements.front() << endl;
    //.end()
    elements.end();
    // vector_name[particular_index] gives element at particular index of vector
    cout << elements[3];
    return 0;
}