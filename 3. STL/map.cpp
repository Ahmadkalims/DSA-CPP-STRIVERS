#include<iostream>
using namespace std;

int main()
{
    //ways to create map
    map<int, int> m1; //Empty map
    map<int, int> m2(m1); //Map with elements of m1

    //Adding elements to map
    m1[1] = 2; //Adds key 1 with value 2 to the map
    m1[2] = 3; //Adds key 2 with value 3 to the map
    m1.insert({3, 4}); //Inserts key 3 with value 4 to the map
    m1.insert({4, 5}); //Inserts key 4 with value 5 to the map

    //Accessing elements of map
    cout << m1[1] << endl; //Output: 2
    cout << m1.at(2) << endl; //Output: 3

    //Removing elements from map
    m1.erase(1); //Removes key 1
    m1.clear(); //Removes all elements

    //Other operations
    cout << m1.size() << endl; //Output: 0
    cout << m1.empty() << endl; //Output: 1

    return 0;
}