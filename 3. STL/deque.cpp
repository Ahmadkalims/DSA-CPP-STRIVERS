#include<iostream>
using namespace std;

int main()
{
    //ways to create deque
    deque<int> d1; //Empty deque
    deque<int> d2(d1); //Deque with elements of d1
    deque<int> d3 = d1; //Deque with elements of d1

    //Adding elements to deque
    d1.push_back(1); //Adds 1 to the end of the deque
    d1.push_front(2); //Adds 2 to the front of the deque
    d1.insert(d1.begin(), 3); //Inserts 3 at the beginning of the deque
    d1.insert(d1.end(), 4); //Inserts 4 at the end of the deque
    d1.insert(d1.begin(), 2, 5); //Inserts 2 copies of 5 at the beginning of the deque
    d1.insert(d1.begin(), d2.begin(), d2.end()); //Inserts elements of d2 at the beginning of the deque

    //Accessing elements of deque
    cout << d1.front() << endl; //Output: 3
    cout << d1.back() << endl; //Output: 4

    //Removing elements from deque
    d1.pop_front(); //Removes the first element
    d1.pop_back(); //Removes the last element
    d1.erase(d1.begin()); //Removes the first element
    d1.erase(d1.begin(), d1.end()); //Removes all elements

    //Other operations
    cout << d1.size() << endl; //Output: 0
    cout << d1.empty() << endl; //Output: 1

    return 0;
}