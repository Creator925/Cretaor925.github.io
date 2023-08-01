#include<bits/stdc++.h>
using namespace std;
int main()
{
    float w, h, consult;
    cin >> w >> h;
    consult = w / (h * h);
    printf("%.1f\n", consult);
    if(consult > 25)
        printf("PANG");
    else
        printf("Hai Xing");
    return 0;
}
