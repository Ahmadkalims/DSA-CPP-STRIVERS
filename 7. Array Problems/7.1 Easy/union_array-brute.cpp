#include<iostream>
#include<vector>
#include<set>
using namespace std;

//self made code brute force
//* avoid duplicate elements

//approach
//1. Create a set
//2. Insert all elements of arr1 into set
//3. Insert all elements of arr2 into set
//4. Print all elements of set

int main(){
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {5, 6, 4, 8, 9, 10};
    set<int> s1;

    
    //Accessing elements of set

    for(int i=0 ; i<arr1.size() ; i++){
        s1.insert(arr1[i]);
    }

    for(int i=0 ; i<arr2.size() ; i++){
         s1.insert(arr2[i]);
    }

    for(auto i : s1){
        cout << i << " ";
    }
   
}

// Time Complexity: O(n+m)
// Space Complexity: O(n+m)