#include <iostream>
#include <queue>
#include <vector>
#include <tuple>

using namespace std;

class Cmp{
    public:
        bool operator()(tuple<int,int,int> a, tuple<int,int,int> b) {
            return get<0>(a) > get<0>(b);
        }
};

pair<int, int> offset[8] = {
    pair<int,int>(1,0),
    pair<int,int>(1,1),
    pair<int,int>(0,1),
    pair<int,int>(-1,1),
    pair<int,int>(-1,0),
    pair<int,int>(-1,-1),
    pair<int,int>(0,-1),
    pair<int,int>(1,-1),
    };

int main() {
    int R; int C;

    scanf("%d %d", &R, &C);

    int arr[R][C];
    bool visited[R][C] = {false};

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
            visited[i][j] = false;
        }
    }

    int x;
    int y;
    scanf("%d %d", &x, &y);
    x--;
    y--;


    long long total = 0;
    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, Cmp> pq;
    if(arr[x][y] <0) {
        pq.emplace(arr[x][y], x, y);
        total -= arr[x][y];
        visited[x][y] = true;
    }
    

    

    while(!pq.empty()) {
        tuple<int,int,int> curr = pq.top();
        pq.pop();
        

        for(int i = 0; i < 8; i++) {
            int x = get<1>(curr) + offset[i].first;
            int y = get<2>(curr) + offset[i].second;

            
            
            if(x >= 0 && x < R && y >= 0 && y < C){

                
                
                if(!visited[x][y] && arr[x][y] < 0) {
                    //printf("%d %d %lld\n", x, y, total);
                    int maxV = max(get<0>(curr), arr[x][y]);
                    total -= maxV;
                    pq.emplace(maxV, x, y);
                    
                    visited[x][y] = true;
                }
            }
        }
        
    }

    printf("%lld\n", total);
}