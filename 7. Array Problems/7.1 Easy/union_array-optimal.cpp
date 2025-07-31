#include<iostream>
#include<vector>
using namespace std;

//Approach:
//1. Create a temporary array.
//2. Insert all elements of the first array into the temporary array.
//3. Insert all elements of the second array into the temporary array.
//4. Traverse the temporary array from start to end.
//5. If the current element is not equal to the next element, insert the current element into the union array.
//6. Print all elements of the union array.


int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 6, 5, 7, 9, 0};
    vector<int> temp;
    vector<int> unionArr;

    for(int i=0 ; i<arr1.size() ; i++)
    {
        temp.push_back(arr1[i]);
    }
    
    for(int i=0 ; i<arr2.size() ; i++)
    {
        temp.push_back(arr2[i]);
    }
    

    for(int i=0 ; i<unionArr.size() ; i++)
    {
        cout<<unionArr[i];
    }
}

// Time Complexity: O(n+m)
// Space Complexity: O(n+m)