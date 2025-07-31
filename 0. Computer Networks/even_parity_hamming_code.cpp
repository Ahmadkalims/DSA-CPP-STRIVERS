#include <iostream>
#include <vector>
#include <algorithm>  // Include this for std::find

using namespace std;

vector<int> calculateParityBits(vector<int> dataBits, vector<int> parityPositions) {
    vector<int> hammingCode;
    int j = 0;

    // Placing data bits and reserving spaces for parity bits
    for (int i = 1; i <= dataBits.size() + parityPositions.size(); i++) {
        if (find(parityPositions.begin(), parityPositions.end(), i) != parityPositions.end()) {
            hammingCode.push_back(0); // Placeholder for parity bits
        } else {
            hammingCode.push_back(dataBits[j]);
            j++;
        }
    }

    // Calculating parity bits to ensure even parity
    for (int p : parityPositions) {
        vector<int> indices;
        for (int i = 1; i <= hammingCode.size(); i++) {
            if ((i & p) == p) {
                indices.push_back(i);
            }
        }
        int parityValue = 0;
        for (int idx : indices) {
            parityValue += hammingCode[idx - 1];
        }
        hammingCode[p - 1] = (parityValue % 2 == 0) ? 0 : 1; // Even parity condition
    }

    return hammingCode;
}

int main() {
    vector<int> dataword = {1, 0, 1, 0, 1};
    vector<int> parityPositions = {1, 2, 4, 8}; // Positions of parity bits in Hamming code

    vector<int> hammingCode = calculateParityBits(dataword, parityPositions);

    cout << "Even parity Hamming code: ";
    for (int bit : hammingCode) {
        cout << bit;
    }
    cout << endl;

    return 0;
}
