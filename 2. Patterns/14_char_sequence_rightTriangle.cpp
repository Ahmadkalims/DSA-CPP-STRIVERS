#include <iostream>
using namespace std;

int main() {

    cout << "Enter the length: ";
    int n;
    cin >> n;

    for (int i=0;i<n;i++)
    {
        for(char j='A';j<='A'+i;j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }