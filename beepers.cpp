#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    for(int caseN = 0; caseN<N; caseN++) {
        int X;
        int Y;
        scanf("%d %d", &X, &Y);
        int x0;
        int y0;
        scanf("%d %d", &x0, &y0);

        int n;
        scanf("%d", &n);
        int x[n+1];
        int y[n+1];
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &x[i], &y[i]);
        }
        x[n] = x0;
        y[n] = y0;

        n++;

        int adjMat[n][n];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j< n; j++) {
                adjMat[i][j] = abs(x[i]-x[j]) + abs(y[i]-y[j]);
            }
        }

        int memo[1<<n][n];
        stack<pair<int,int>> st;
        stack<int> st2;
        st2.push(0);
        st.push(pair<int,int>(1<<n-1,n-1));
        while(!st.empty()) {
            pair<int,int> p = st.top();
            for(int i = 0; i < n; i++) {
                if((~p.first)&(1<<i)) {
                    pair<int,int> pp;
                }
            }
        }

    }
}