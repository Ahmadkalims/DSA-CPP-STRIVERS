#include <iostream>
using namespace std;

int main()
{
    //Ways to create list
    list<int> l1; //Empty list
    list<int> l2(3); //List with 3 elements
    list<int> l3(l2); //List with elements of l2
    list<int> l4 = l2; //List with elements of l2

    //Adding elements to list
    l1.push_back(1); //Adds 1 to the end of the list
    l1.push_front(2); //Adds 2 to the front of the list
    l1.insert(l1.begin(), 3); //Inserts 3 at the beginning of the list
    l1.insert(l1.end(), 4); //Inserts 4 at the end of the list
    l1.insert(l1.begin(), 2, 5); //Inserts 2 copies of 5 at the beginning of the list
    l1.insert(l1.begin(), l2.begin(), l2.end()); //Inserts elements of l2 at the beginning of the list

    //Accessing elements of list
    cout << l1.front() << endl; //Output: 3
    cout << l1.back() << endl; //Output: 4

    //Removing elements from list
    l1.pop_front(); //Removes the first element
    l1.pop_back(); //Removes the last element
    l1.erase(l1.begin()); //Removes the first element
    l1.erase(l1.begin(), l1.end()); //Removes all elements

    //Other operations
    cout << l1.size() << endl; //Output: 0
    cout << l1.empty() << endl; //Output: 1

    return 0;

}