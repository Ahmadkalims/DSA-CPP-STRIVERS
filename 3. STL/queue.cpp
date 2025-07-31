#include<iostream>
using namespace std;

int main()
{
    //ways to create queue
    queue<int> q1; //Empty queue
    queue<int> q2(q1); //Queue with elements of q1
    queue<int> q3 = q1; //Queue with elements of q1

    //Adding elements to queue
    q1.push(1); //Adds 1 to the end of the queue
    q1.push(2); //Adds 2 to the end of the queue
    q1.push(3); //Adds 3 to the end of the queue

    //Accessing elements of queue
    cout << q1.front() << endl; //Output: 1
    cout << q1.back() << endl; //Output: 3

    //Removing elements from queue
    q1.pop(); //Removes the front element
    
    //Other operations
    cout << q1.size() << endl; //Output: 2
    cout << q1.empty() << endl; //Output: 0

    return 0;
}