#include <iostream>
using namespace std;

int main() {
    int N; int M; int P;
    scanf("%d %d %d", &N, &M, &P);
    int maxN = N;

    bool dead = false;
    for(int ii = 0; ii < M; ii++) {
        int damage;
        scanf("%d", &damage);

        if(!dead) {
            if(damage >= N) {
                int numPotions = min(P, (damage - N + 1) / 20 + 1);
                P -= numPotions;
                N = min(maxN, N + 20*numPotions);
            }
            N -= damage;
            if(N<=0) {
                dead = true;
            }
        }
        
    }

    if(dead) {
        printf("next time\n");
    } else {
        printf("champion\n");
    }
}