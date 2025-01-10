#include <iostream>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        int num = 1;
        for(int j = 1; j <= n; j++) {
            num = (num * j) % 10;
        }
        printf("%d\n", num);
    }
}