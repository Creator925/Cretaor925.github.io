#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
    double h, w;
        scanf("%lf%lf", &h, &w);
    w /= 2;
    double bw;
    bw = (h - 100) * 0.9;
    if(fabs(w - bw) < bw * 0.1){
        printf("You are wan mei!\n");
            }
    else if((bw - w) >= bw * 0.1){
        printf("You are tai shou le!\n");
        }
    else if((w - bw) >= bw * 0.1){
        printf("You are tai pang le!\n");
    }
    }
    return 0;
}
