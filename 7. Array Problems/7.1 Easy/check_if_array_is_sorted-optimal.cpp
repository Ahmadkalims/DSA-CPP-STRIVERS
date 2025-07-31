#include <iostream>
#include<vector>
using namespace std;

//Approach:
//Iterate through the array and check if the current element is greater than or equal to the previous element.
//If the current element is smaller than the previous element, return false.
//If the loop completes without returning false, return true.


bool is_sorted(vector<int> arr){
  for(int i=1 ; i<arr.size() ; i++){
    if(arr[i] < arr[i-1]){
      return false;
    }
  }
    return true;
}


int main()
{
     vector<int> arr = {1, 2, 2, 3, 4, 5};
  
     int ans = is_sorted(arr);
     if (ans) cout << "Array is sorted" << endl;
     else cout << "Array is not sorted" << endl;

    return 0;
}

// Time Complexity: O(n)
// Best Case: O(1) when the array is already sorted.
// Worst Case: O(n) when the array is sorted in descending order.
// Average Case: O(n) when the array is sorted in random order.
// Space Complexity: O(1) for the rest of the code.




// this method is bad readability as it if section is left empty making it unclear and confusing which can be fixed by changing the >= to < in the condition
// bool is_sorted(vector<int> arr){
//   for(int i=1 ; i<arr.size() ; i++){
//     if(arr[i] >= arr[i-1]){
//       // if section empty
//     }
//     else{return false;} // false in else section
//   }
//     return true;}