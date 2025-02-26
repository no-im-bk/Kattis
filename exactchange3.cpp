#include <iostream>
using namespace std;

int main() {
    char a[1000001];
    char b[1000001];

    scanf("%1000000s", &a[0]);
    scanf("%1000000s", &b[0]);

    int alen = -1;
    int blen = -1;
    for(int i = 0; i < 1000001; i++) {

        if(alen < 0 && a[i] == '\0') {
            alen = i;
        }
        if(blen < 0 && b[i] == '\0') {
            blen = i;
        }
        if(blen >=0 && alen >=0) {
            break;
        }
    }
    if(blen > alen) {
        printf("%d\n", blen);
    } else {
        int count = 0;
        for(int i = 0; i < blen; i++) {
            if(b[i] == '1' && a[i] == '0') {
                count += blen - i;
                break;
            } else if(a[i] == '1' || b[i] == '1') {
                count++;
            }
        }

        printf("%d\n", count);
    }

    

    
}