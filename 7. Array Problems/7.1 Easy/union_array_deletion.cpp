#include<iostream>
#include<vector>
using namespace std;

//self made code brute force

//Approach:
//1. Traverse the first array from start to end.
//2. Traverse the second array from start to end.
//3. If the element of the first array is equal to the element of the second array, delete the element from the second array.
//4. Insert all elements of the first array into the second array.
//5. Print all elements of the second array.


int main()
{

    vector<int> arr1 = {2, 3, 5, 7, 1};
    vector<int> arr2 = {4, 2, 10, 5, 6, 3, 29};

    for(int i=0 ; i<arr1.size() ; i++)
    {
        for(int j = 0 ; j<arr2.size() ; j++)
        {
            if(arr1[i] == arr2[j])
            {
                arr2.erase(arr2.begin() + j);
            }
        }
    }

    for(int i=0 ; i<arr1.size() ; i++)
    {
        arr2.push_back(arr1[i]);
    }

    for(int i=0 ; i<arr2.size() ; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}

// Time Complexity: O(n*m)
// Space Complexity: O(1)
// This code is contributed by Ankita Kulkarni