#include <iostream>
using namespace std;

int main() {

        cout << "Enter the length: ";
        int n;
        cin >> n;

        cout << "method 1" << endl;

        for (int i=0; i<n;i++) {

            if ((i == n-1) || (i == 0)){
                for (int j = 0; j < n; j++) {
                    cout << "*  ";
                }


            } else {
                cout << "*  ";
                for(int j=1; j<n-1;j++){
                    cout << "   ";
                }
                cout << "*  ";
            }

            cout << endl;
        }


        //method 2 (better)
        cout << endl;
        cout << "Method 2" << endl;

        for (int i=0; i<n; i++){
            cout << "*  ";
        }
        cout << endl;

        for (int i = 1; i<n-1 ; i++){

            cout << "*  ";

            for(int j=1; j<n-1; j++){
                cout << "   ";
            }

            cout << "*  ";
            cout << endl;
        }
        for (int i=0; i<n; i++){
            cout << "*  ";
        }

    }