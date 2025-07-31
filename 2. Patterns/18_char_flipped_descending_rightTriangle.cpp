#include <iostream>
using namespace std;

int main() {

    cout << "Enter the length: ";
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        for (char k =(char)(int)('A'+n-i-1); k <= (char)(int) ('A'+n-1); k++) {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}