#include <iostream>
using namespace std;

int main() {

    int ans[1000001];

    long long fact = 1;

    for(int i = 1; i < 1000001; i++) {
        fact = fact * i;
        while(fact % 10 == 0) {
            fact /= 10;
        }
        fact = fact % 1000000000;
        ans[i] = fact;
    }

    // for(int i = 1; i < 100; i++) {
    //     printf("%d: %d\n", i,ans[i]);
    // }
    while(true) {
        int n;
        scanf("%d", &n);

        if(n == 0) {
            break;
        } 
        printf("%d\n", ans[n] % 10);
    }
}