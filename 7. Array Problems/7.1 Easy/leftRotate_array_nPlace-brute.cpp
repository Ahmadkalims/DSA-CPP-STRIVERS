#include<iostream>
#include<vector>
using namespace std;

//Approach:
//1. Take the array and the number of rotations as input.
//2. Find the length of the array.
//3. Find the remainder of the number of rotations with the length of the array.
//4. Create a temporary array of size n.
//5. Copy the first n elements of the array to the temporary array.
//6. Delete the first n elements of the array.
//7. Push the elements of the temporary array to the end of the array.
//8. Print the array.

int main()
{
    
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = 7;
    int length = arr.size();

    n = n%length;

    int temp[n];

    for(int i=0 ; i<n; i++)
    {
        temp[i]=arr[i];
    }

    //we can also shift the elements to left by n places instead of deleting the elements
    for(int i=0 ; i<n; i++)
    {
        arr.erase(arr.begin() + i);
    }

    for(int i=0 ; i<n; i++)
    {
        arr.push_back(temp[i]);
    }


    for(int i=0 ; i<length ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}

// Time Complexity: O(n)
// Space Complexity: O(n)

//two more methods are using reverse and using gcd