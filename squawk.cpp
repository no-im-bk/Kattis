#include <iostream>

using namespace std;

int main() {
    int n; int m; int s; int t;

    scanf("%d %d %d %d", &n, &m, &s, &t);

    int adjMatrix[n][n];
    long long x[n];

    

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            adjMatrix[i][j] = 0;
            
        }
        x[i] = 0;
    }
    x[s] = 1;

    for(int i = 0; i < m; i++) {
        int u; int v;
        scanf("%d %d", &u, &v);

        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }

    for(int i = 0; i < t; i++) {
        long long y[n];
        for(int j = 0; j < n; j++) {
            y[j] = 0;
            for(int k = 0; k < n; k++) {
                y[j] += x[k] * adjMatrix[k][j];
            }
        }
        for(int j = 0; j < n; j++) {
            x[j] = y[j];
        }
    }

    long long total = 0;

    for(int i = 0; i < n; i++) {
        total += x[i];
    }

    printf("%lld\n", total);
    
}