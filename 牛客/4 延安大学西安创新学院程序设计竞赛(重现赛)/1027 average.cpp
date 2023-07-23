#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, sum = 0, ave = 0;
    cin >> a >> b >> c;
    sum = a + b + c;
    ave = sum / 3.0;
    printf("%.2f %.2f\n", sum, ave);
    return 0;
}
