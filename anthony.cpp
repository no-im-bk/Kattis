#include <iostream>
using namespace std;

int main() {

    int N; int M;
    scanf("%d %d", &N, &M);

    double p[N+1];
    double calcP[N+1];

    for(int i = 0; i < N+1; i++) {
        p[i] = 0;
    }

    p[N] = 1;

    for(int i = 0; i < N+M-1; i++) {
        double pp;
        scanf("%lf", &pp);
        // printf("%lf\n", pp);

        

        for(int i = 0; i < N+1; i++) {
            calcP[i] = 0;
        }

        for(int i = 1; i < N+1; i++) {
            calcP[i] += pp * p[i];
            calcP[i-1] += (1-pp) * p[i];
        }
        calcP[0] += p[0];

        for(int i = 0; i < N+1; i++) {
            p[i] = calcP[i];
            // printf("%lf ", p[i]);
        }
        // printf("\n");

    }

    double sum = 0;

    for(int i = 1; i < N+1; i++) {
        sum += p[i];
    }

    printf("%f\n", sum);
}