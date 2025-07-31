#include<iostream>
#include<set>
using namespace std;

//Approach:
//1. Create a set
//2. Traverse the array and insert elements into the set
//3. Set will automatically remove duplicates

int main()
{
    int n = 10;
    int arr[n] = {1, 2, 2, 3, 3, 3, 4, 1, 5, 1};
    
    set<int> s;
    for(int i=0 ; i<n ; i++)
    {
        s.insert(arr[i]);
    }

     for(int i  : s)
    {
        cout << i << " ";
    }
    return 0;
}

// Time Complexity: O(n)
// Best Case: O(n) when all elements are unique.
// Average Case: O(n) when some elements are repeated.
// Worst Case: O(n) when all elements are the same.
// Space Complexity: O(n)