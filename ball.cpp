#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int attendees[n];
    for(int i = 0; i < n; i++) {
        attendees[i] = 0;
    }

    int bad1 = -1; int bad2 = -1;

    for(int i = 0 ; i < 2 * n; i++) {
        int a;
        scanf("%d", &a);
        a--;
        attendees[a]++;
        if(attendees[a] >= 2) {
            if(bad1 >= 0 && bad2 < 0) {
                bad2 = a;
            } else if(bad1 < 0 && bad2 < 0) {
                bad1 = a;
            }
           
        }
    }
    bad1++; bad2++;
    printf("%d %d\n", min(bad1,bad2), max(bad1,bad2));


}