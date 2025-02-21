#include <iostream>
#include <cmath>
using namespace std;

int main() {

    char s[1000010];

    scanf("%1000010s", &s[0]);

    int len = 0;

    for(int i = 0; i < 1000010; i++) {
        if(s[i] == '\0') {
            len = i;
            break;
        }
    }

    long double mantissa = 0;

    for(int i = 0; i < min(10,len); i++) {
        mantissa += (s[i] - '0') * pow(0.1, i);
    }

    long double nlog = logl(mantissa)/ logl(10) + len - 1;
    
    long double f = 0;

    long double minDiff = 1e18;

    for(int i = 1; f<= 1000000; i++) {
        f += (logl(i) / logl(10));
        if (abs(nlog - f) < minDiff) {
            minDiff = abs(nlog - f);
        } else {
            printf("%d\n",i-1);
            return 0;
        }
    }


}