#include <iostream>
using namespace std;



int main() {
    int n; int a; int b; int c;
    int MODULUS = 1000000007;

    scanf("%d %d %d %d", &n, &a, &b, &c);

    long long memo[n][3];

    memo[n-1][0] = a;
    memo[n-1][1] = b;
    memo[n-1][2] = c;

    for(int i = n-2; i >=0; i--) {
        memo[i][0] = (a * (memo[i+1][1] + memo[i+1][2]))%MODULUS;
        memo[i][1] = (b * (memo[i+1][0] + memo[i+1][2]))%MODULUS;
        memo[i][2] = (c * (memo[i+1][0] + memo[i+1][1]))%MODULUS;
    }

    printf("%lld\n", (memo[0][0] + memo[0][1] + memo[0][2]) % MODULUS);
}