#include <iostream>
using namespace std;

int main() {

        cout << "Enter the length: ";

        int n;
        cin >> n;

        for (int i=0; i<n; i++ ){

            for (int j = n-i; j>0; j--){
                cout << " ";
            }

            for (int k=0; k<=i; k++){
                cout << " *";
            }

            cout << endl;
        }
    return 0;
}