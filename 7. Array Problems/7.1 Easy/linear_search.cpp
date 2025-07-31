#include<iostream>
using namespace std;

//Approach:
//1. Traverse the array from start to end.
//2. Check if the current element is equal to x.
//3. If yes, return the index.
//4. If no, return 0.


int search(int arr[], int n, int x)
{
    int index = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==x)
        {
            index=i;
        }
    }

    if (index==0)
    {
        return 0;
    }
    return (index);

}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int x = 34;

    int result = search(arr, n, x);
    
    if(result==0)
    {
        cout<<"Not found";
    }
    else
    {
        cout<<result;
    }
    
    return 0;
}

