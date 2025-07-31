#include <stdio.h>
#define MAX 10
#define INF 999

int main() {
    int dist[MAX][MAX], via[MAX][MAX];
    int n, i, j, k;

    // Input number of nodes
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Input cost matrix
    printf("Enter the cost matrix (use 999 for no direct path):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &dist[i][j]);
            if (i == j)
                dist[i][j] = 0;
            via[i][j] = j;
        }
    }

    // Distance Vector Algorithm (Bellman-Ford logic)
    for (k = 0; k < n; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    via[i][j] = via[i][k];
                }
            }
        }
    }

    // Display Final Routing Table
    for (i = 0; i < n; i++) {
        printf("\nRouting Table for Node %d:\n", i + 1);
        printf("Destination\tNext Hop\tCost\n");
        for (j = 0; j < n; j++) {
            if (i != j)
                printf("%d\t\t%d\t\t%d\n", j + 1, via[i][j] + 1, dist[i][j]);
        }
    }

    return 0;
}
