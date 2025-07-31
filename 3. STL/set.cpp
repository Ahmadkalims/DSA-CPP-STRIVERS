#include<iostream>
using namespace std;

int main()
{
    //ways to create set
    set<int> s1; //Empty set
    set<int> s2(s1); //Set with elements of s1
    set<int> s3 = s1; //Set with elements of s1

    //Adding elements to set
    s1.insert(1); //Adds 1 to the set
    s1.insert(2); //Adds 2 to the set
    s1.insert(3); //Adds 3 to the set
    
    //Accessing elements of set
    cout << *s1.begin() << endl; //Output: 1
    cout << *s1.rbegin() << endl; //Output: 3

    //printing all elements of set
    for(auto i : s1)
    {
        cout << i << " ";
    }


    //Removing elements from set
    s1.erase(1); //Removes 1 from the set
    s1.clear(); //Removes all elements

    //Other operations
    cout << s1.size() << endl; //Output: 0
    cout << s1.empty() << endl; //Output: 1

    return 0;
}