#include <iostream>
#include <cmath>
using namespace std;


int main() {
    while(true) {
        int n;
        cin >> n;
        if(n == 0) {
            break;
        }
        int px[n];
        int py[n];

        for(int i = 0; i < n; i++) {
            cin >> px[i] >> py[i];


        }

        int m;
        cin >> m;

        for(int i = 0; i<m; i++) {
            int x; int y;
            cin >> x >> y;
            double tot = 0;
            bool isOn = false;

            for(int j = 0; j < n; j++) {
                long long x1 = px[j]-x;
                long long y1 = py[j]-y;
                long long x2 = px[(j+1)%n]-x;
                long long y2 = py[(j+1)%n]-y;
                double angle = atan2( (x1*y2-x2*y1), (x1*x2+y1*y2));
                
                if(((x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0)) || abs(abs(angle) - 3.1415926535) < 1e-6) {
                    printf("on\n");
                    isOn = true;
                    break;
                }
                //printf("%f %f %f %f %f \n", x1,y1,x2,y2,angle);
                tot += angle;
            }
            if(!isOn) {
                if(abs(tot) < 1e-6) {
                    printf("out\n");
                } else {
                    printf("in\n");
                }
            }
            
        }

    }
}