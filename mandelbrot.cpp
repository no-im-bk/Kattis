#include <iostream>
using namespace std;

int main() {
    int NN = 0;

    double x; double y; int r;

    while(scanf("%lf %lf %d", &x, &y,&r) != EOF) {

        long double zx = 0; long double zy = 0;
        bool div = false;
        for(int i = 0; i < r ; i++) {
            long double new_zx = zx * zx - zy * zy + x;
            long double new_zy = 2*zx*zy + y;

            zx = new_zx; zy = new_zy;

            if(zx * zx + zy * zy > 4) {
                div = true;
                break;
            }   
        }
        printf("Case %d: ", ++NN);

        if(div || zx * zx + zy * zy > 4) {
            printf("OUT\n");
        } else {
            printf("IN\n");
        }
    }
}