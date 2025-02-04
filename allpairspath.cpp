#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n; int m; int q;
    while(scanf("%d %d %d", &n, &m, &q) != EOF) {
        if (n == 0) {
            break;
        }

        int dist[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n ;j++) {
                dist[i][j] = -1000000;

                if(i == j) {
                    dist[i][j] = 0;
                }
            }
        }

        for(int i = 0; i < m ; i++) {
            int u; int v; int w;
            scanf("%d %d %d", &u, &v, &w);
            if(dist[u][v] == -1000000) {
                dist[u][v] = w;
            } else {
                dist[u][v] = min(w, dist[u][v]);
            }
            
        }


        for(int i = 0; i < n; i++) {
            for(int ii = 0; ii < n; ii++) {
                for(int jj = 0; jj < n; jj++) {
                    if(dist[ii][i] != -1000000 && dist[i][jj] != -1000000) {
                        if(dist[ii][jj] == -1000000 || dist[ii][i] + dist[i][jj] < dist[ii][jj]) {
                            dist[ii][jj] = dist[ii][i] + dist[i][jj];
                        }
                    }
                }
            }
        }

        stack<int> st;
        bool loop[n];
        for(int i = 0; i < n ; i++) {
            loop[i] = false;
            if(dist[i][i] < 0) {
                st.emplace(i);
                loop[i] = true;
            }
        }

        

        while(!st.empty()) {
            int top = st.top();
            st.pop();
            for(int i = 0; i < n; i++) {
                if(dist[top][i] != -1000000 && !loop[i]) {
                    loop[i] = true;
                    st.push(i);
                }
            }
        }


        

        for(int i = 0; i < q; i++) {
            int u; int v;
            scanf("%d %d", &u, &v);
            if(dist[u][v] == -1000000) {
                printf("Impossible\n");
            } else if (loop[v]) {
                printf("-Infinity\n");
            } else {
                printf("%d\n", dist[u][v]);
            }
        }
        printf("\n");
    }
}