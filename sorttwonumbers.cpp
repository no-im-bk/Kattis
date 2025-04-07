#include <iostream>
using namespace std;

int main() {
    int a; int b;
    scanf("%d %d", &a, &b);
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    printf("%d %d\n",a ,b);
}