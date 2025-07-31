#include <iostream>
using namespace std;

int main(){

    cout << "Enter the length: ";
    int n;
    cin >> n;

    for (int i = 0; i<n;i++){
        for (int j = n-2; j>=i;j--){
            cout << "  ";
        }

        for (char k='A'; k<='A'+i;k++){
            cout << " " << k;
        }

        for (int k = i; k >= 1; k--) {
            cout << " " << (char) (int)('A'+k-1);
        }

        cout << endl;
    }

    return 0;
}