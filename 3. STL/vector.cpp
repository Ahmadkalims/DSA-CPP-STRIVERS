#include<iostream>
using namespace std;

int main()
{
    //Different ways to create vector
    vector<int> v1; //Empty vector
    vector<int> v2(5); //Vector of size 5 with default value 0
    vector<int> v3(5, 10); //Vector of size 5 with default value 10
    vector<int> v4 = {1, 2, 3, 4, 5}; //Vector with elements 1, 2, 3, 4, 5
    vector<int> v5(v4.begin(), v4.end()); //Vector with elements of v4

    //Accessing elements of vector
    cout << v4[2] << endl; //Output: 3
    cout << v4.at(2) << endl; //Output: 3
    cout << v4.front() << endl; //Output: 1
    cout << v4.back() << endl; //Output: 5

    //Iterating over vector
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    }
    cout << endl;

    for (auto i = v4.begin(); i != v4.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i : v4)
    {
        cout << i << " ";
    }
    cout << endl;

    //Adding elements to vector
    v4.push_back(6); //Adds 6 to the end of the vector
    v4.insert(v4.begin() + 2, 7); //Inserts 7 at index 2
    v4.insert(v4.begin() + 2, 3, 8); //Inserts 3 copies of 8 at index 2
    v4.insert(v4.begin() + 2, v5.begin(), v5.end()); //Inserts elements of v5 at index 2
    v4.emplace(v4.begin() + 2, 9); //Inserts 9 at index 2
    v4.emplace_back(10); //Adds 10 to the end of the vector

    //Removing elements from vector
    v4.pop_back(); //Removes the last element
    v4.erase(v4.begin() + 2); //Removes element at index 2
    v4.erase(v4.begin() + 2, v4.begin() + 5); //Removes elements from index 2 to 4
    v4.clear(); //Removes all elements

    //Other operations
    cout << v4.size() << endl; //Output: 0
    cout << v4.empty() << endl; //Output: 1

    return 0;
}