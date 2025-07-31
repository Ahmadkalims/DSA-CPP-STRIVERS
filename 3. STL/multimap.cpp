#include<iostream>
using namespace std;

int main()
{
    //ways to create multimap
    multimap<int, int> mm1; //Empty multimap
    multimap<int, int> mm2(mm1); //Multimap with elements of mm1

    //Adding elements to multimap
    mm1.insert({1, 2}); //Inserts key 1 with value 2 to the multimap
    mm1.insert({2, 3}); //Inserts key 2 with value 3 to the multimap
    mm1.insert({1, 4}); //Inserts key 1 with value 4 to the multimap
    mm1.insert({3, 5}); //Inserts key 3 with value 5 to the multimap

    //Accessing elements of multimap
    cout << mm1.count(1) << endl; //Output: 2
    cout << mm1.find(2)->second << endl; //Output: 3

    //Removing elements from multimap
    mm1.erase(1); //Removes all elements with key 1
    mm1.clear(); //Removes all elements

    //Other operations
    cout << mm1.size() << endl; //Output: 0
    cout << mm1.empty() << endl; //Output: 1

    return 0;
}