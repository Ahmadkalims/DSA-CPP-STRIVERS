#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> // Added for reverse
using namespace std;

// Function to find the minimum cost to reach (m, n)
int minCost(vector<vector<int>>& cost, int m, int n) {
    int rows = cost.size();
    int cols = cost[0].size();
    vector<vector<int>> dp(rows, vector<int>(cols, 0));

    dp[0][0] = cost[0][0];

    // Fill the first row
    for (int j = 1; j <= n; j++) {
        dp[0][j] = dp[0][j-1] + cost[0][j];
    }

    // Fill the first column
    for (int i = 1; i <= m; i++) {
        dp[i][0] = dp[i-1][0] + cost[i][0];
    }

    // Fill the rest of the dp table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = cost[i][j] + min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]);
        }
    }

    return dp[m][n];
}

// Function to print the path with the minimum cost
void printPath(vector<vector<int>>& cost, int m, int n) {
    int i = m, j = n;
    vector<pair<int, int>> path;

    while (i > 0 || j > 0) {
        path.push_back(make_pair(i, j)); // Replaced structured bindings with make_pair
        if (i == 0) j--;
        else if (j == 0) i--;
        else if (cost[i-1][j-1] <= cost[i-1][j] && cost[i-1][j-1] <= cost[i][j-1]) {
            i--; j--;
        } else if (cost[i-1][j] <= cost[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }
    path.push_back(make_pair(0, 0));

    reverse(path.begin(), path.end());
    for (size_t k = 0; k < path.size(); k++) { // Replaced structured bindings with traditional iteration
        cout << "(" << path[k].first << ", " << path[k].second << ") ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> cost = {
        {1, 3, 5},
        {2, 9, 2},
        {4, 6, 8}
    };

    int m = 2, n = 2;

    cout << "Minimum cost: " << minCost(cost, m, n) << endl;
    cout << "Path: ";
    printPath(cost, m, n);

    return 0;
}
