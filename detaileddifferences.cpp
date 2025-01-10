#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for(int nn = 0; nn<n; nn++) {

    char a[100];
    char b[100];

    scanf("%s %s", &a[0], &b[0]);

    for(int i = 0; i < 100; i++) {
        if( a[i] == '\0') {
            break;
        }
        printf("%c", a[i]);
    }
    printf("\n");

    for(int i = 0; i < 100; i++) {
        if( b[i] == '\0') {
            break;
        }
        printf("%c", b[i]);
    }
    printf("\n");

    for(int i = 0; i < 100; i++) {
        if (a[i] == '\0' || b[i] == '\0') {
            break;
        } else if(a[i] == b[i]) {
            printf(".");
        } else {
            printf("*");
        }
    }
    printf("\n");
    printf("\n");
    }
}