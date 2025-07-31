#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int k = n - i - 2; k >= 0; k--) {
            cout << "  ";
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            cout << " *";
        }

        cout << endl;
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < (2 * n) - (2 * i) - 1; j++) {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}