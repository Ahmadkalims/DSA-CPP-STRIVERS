#include <iostream>
using namespace std;

int main() {

        cout << "Enter the length: ";
        int n;
        cin >> n;

        cout << "method 1" << endl;

        for (int i = 0; i<n; i++) {
            for (int j = n; j > i; j--) {
                cout << "*";
            }

            for (int s = 1; s <= i; s++) {
                cout << " ";
            }

            for (int s = 1; s <= i; s++) {
                cout << " ";
            }

            for (int j = n; j > i; j--) {
                cout << "*";
            }

            cout << endl;
        }

        for (int i=0; i<n ; i++){
            for (int j=0; j<=i; j++){
                cout << "*";
            }

            for (int s=n-1; s>i; s--){
                cout << " ";
            }

            for (int s=n-1; s>i; s--){
                cout << " ";
            }

            for (int j=0; j<=i; j++){
                cout << "*";
            }

            cout << endl;
        }

        //method 2 (better)
        cout << endl;
        cout << "method 2" << endl;

        for (int i = 0; i<n; i++) {
            for (int j = n; j > i; j--) {
                cout << "*";
            }

            //s for spacing
            for (int s = 0; s < 2*i; s++) {
                cout << " ";
            }

            for (int j = n; j > i; j--) {
                cout << "*";
            }

            cout << endl;
        }

        for (int i=0; i<n ; i++){
            for (int j=0; j<=i; j++){
                cout << "*";
            }

            for (int s=n+2; s>2*i; s--){
                cout << " ";
            }

            for (int j=0; j<=i; j++){
                cout << "*";
            }

            cout << endl;
        }
    return 0;
}