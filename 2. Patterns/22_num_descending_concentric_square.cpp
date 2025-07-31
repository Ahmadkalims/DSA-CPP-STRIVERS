#include <iostream>
using namespace std;

int main() {

        cout << "Enter the length: ";
        int n;
        cin >> n;


        //upper half
        for(int i=0; i<n; i++){

            //left triangle
            for (int j=n; j>=n-i+1; j--) {
                cout << j << " ";
            }


            //middle inverted pyramid
            // chat gpt ka bakwas code
//            int number = n-i+1;
//            int count = 2*(n-i)-1;
//
//            for (int j=0; j<count; j++) {
//                System.out.print(number-1 + " ");
//            }


            //middle inverted pyramid
            for(int j=n; j>2*i-n+1; j--){
                cout << n-i << " ";
            }

            //right triangle
            for (int k=n-i+1; k<=n; k++) {
                cout << k << " ";
            }

            cout << endl;
        }


        //lower half
        for(int i= 1; i<n; i++){

            //left triangle
            for(int j=n; j>i ; j--){
                cout << j << " ";
            }

            //middle odd pyramid
            for (int j=1; j<2*i; j++) {
                cout << i+1 << " ";
            }

            //right triangle
            for (int j = i; j < n; j++) {
                cout << j+1 << " ";
            }

            cout << endl;
        }



        return 0; 
}