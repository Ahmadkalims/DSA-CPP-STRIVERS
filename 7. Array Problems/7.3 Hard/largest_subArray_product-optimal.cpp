#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr ={-2, 0, -1, 9, 8, 0, 2, 3};
    int n = arr.size();

    int prefix = 1;
    int suffix = 1;
    int maxi = INT_MIN;

    for(int i=0; i<arr.size(); i++)
    {
        if(prefix == 0 ) prefix = 1;
        if(suffix == 0) suffix = 1;

        prefix*=arr[i];
        suffix *= arr[n-i-1];

        maxi = max(maxi, max(prefix, suffix));
    }

    cout<<maxi;
    return 0;
}