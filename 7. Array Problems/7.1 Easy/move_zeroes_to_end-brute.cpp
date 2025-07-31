#include<iostream>
#include<vector>
using namespace std;


//self made code brute force
//only need to print the new array with non zero elements pushed and the rest of zeroes will automatically be added since the default value is 0 when we print till arr.size

//Approach:
//1. Take the array as input.
//2. Create a new array.
//3. Push the non zero elements of the array to the new array.
//4. Print the new array.


// int main()
// {
//     vector<int> arr = {0, 0, 0, 1, 2, 3, 3, 1, 4, 0, 0, 0, 5, 1, 0};
//     vector <int> arrZ;
//     int k = arr.size();

//     for(int i=0 ; i<arr.size() ; i++){
//         if(arr[i]!=0){
//             arrZ.push_back(arr[i]);
//         }
//     } 

//     for(int i=0 ; i<k ; i++){
//         cout<<arrZ[i]<<" ";
//     }
// }

// Time Complexity: O(n)
// Space Complexity: O(n)

//the above code is not working properly, becuase the default values in the new array is garbage values and not 0
//so the zeroes are not being added to the new array
//the correct code is below

//Approach:
//1. Take the array as input.
//2. Create a new array.
//3. Push the non zero elements of the array to the new array.
//4. Push the zeroes to the new array.
//5. Print the new array.

int main()
{

    vector<int> arr = {1, 0, 2, 0, 3};
    vector <int> arrZ;

    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i]!=0){
            arrZ.push_back(arr[i]);
        }
    }

    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i]==0){
            arrZ.push_back(arr[i]);
        }
    }

    for(int i=0 ; i<arr.size() ; i++){
        cout<<arrZ[i];
    }
}

// Time Complexity: O(n)
// Space Complexity: O(n)