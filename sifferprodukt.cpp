#include <iostream>
using namespace std;

int main() {
    int x;
    scanf("%d", &x);

    while(x > 9) {
        int newx = 1;
        while(x > 0) {
            int digit = x % 10;
            if(digit > 0) {
                newx *= digit;
            }
            x/=10;
        }
        x = newx;
    }

    printf("%d\n",x);
}