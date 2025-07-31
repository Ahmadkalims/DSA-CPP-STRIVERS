#include<iostream>
using namespace std;

int main()
{
    //ways to create priority queue
    priority_queue<int> pq1; //Empty priority queue
    priority_queue<int> pq2(pq1); //Priority queue with elements of pq1
    priority_queue<int> pq3 = pq1; //Priority queue with elements of pq1

    //Adding elements to priority queue
    pq1.push(1); //Adds 1 to the priority queue
    pq1.push(2); //Adds 2 to the priority queue
    pq1.push(3); //Adds 3 to the priority queue

    //Accessing elements of priority queue
    cout << pq1.top() << endl; //Output: 3

    //Removing elements from priority queue
    pq1.pop(); //Removes the top element

    //Other operations
    cout << pq1.size() << endl; //Output: 2
    cout << pq1.empty() << endl; //Output: 0

    return 0;
}