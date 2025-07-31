#include<iostream>
using namespace std;

int main()
{
    int arr[4]= {1, 2, 4, 5}; // array of size 4

    int n=5; // total numbers from 1 to 5

    int total_sum = n * (n + 1) / 2; // sum of first n natural numbers
    int array_sum = 0;

    for(int i=0; i<n-1; i++)
    {
        array_sum += arr[i];
    }

    int missing_number = total_sum - array_sum;

    cout << "The missing number is: " << missing_number << endl;

    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    // Outer loop that runs from 1 to N:
    for (int i = 1; i <= N; i++) {

        // flag variable to check
        //if an element exists
        int flag = 0;

        //Search the element using linear search:
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {

                // i is present in the array:
                flag = 1;
                break;
            }
        }

        // check if the element is missing
        //i.e flag == 0:

        if (flag == 0) return i;
    }

    // The following line will never execute.
    // It is just to avoid warnings.
    return -1;
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

