#include <iostream>
using namespace std;

int main(){

    cout << "Enter the length: ";
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        for(int j=0 ;j<=i;j++){
            cout << (char)((int)('A'+i)) << " ";
        }
        cout << endl;
    }

    return 0;
}