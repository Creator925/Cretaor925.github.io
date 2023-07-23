#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, max1, max2, max3;
    float m;
    cin >> a >> b >> c;
    if(a + b > b)
        if(a + b > c)
            max1 = a + b;
        else
            max1 = c;
    else
        if(b > c)
            max1 = b;
        else
            max1 = c;
    
    if(a > b + c)
        if(a > c)
            max2 = a;
        else
            max2 = c;
    else
        if(b + c > c)
            max2 = b + c;
        else
            max2 = c;
    
    if(a > b)
        if(b > b + c)
            max3 = b;
        else
            max3 = b + c;
    else
        if(a > b + c)
            max3 = a;
        else
            max3 = b + c;
    m = max1 * 1.0 / ( max2 + max3);
    printf("%.2f\n", m);
    return 0;
}
