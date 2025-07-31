#include<iostream>
using namespace std;

int main()
{
    //Ways to create stack
    stack<int> s1; //Empty stack
    stack<int> s2(s1); //Stack with elements of s1
    stack<int> s3 = s1; //Stack with elements of s1

    //Adding elements to stack
    s1.push(1); //Adds 1 to the top of the stack
    s1.push(2); //Adds 2 to the top of the stack
    s1.push(3); //Adds 3 to the top of the stack

    //Accessing elements of stack
    cout << s1.top() << endl; //Output: 3

    //Removing elements from stack
    s1.pop(); //Removes the top element

    //Other operations
    cout << s1.size() << endl; //Output: 2
    cout << s1.empty() << endl; //Output: 0

    return 0;
}