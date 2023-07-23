#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c, m, e;
    cin >> c >> m >> e;
    int ave;
    ave = (c + m + e) / 3;
    if (ave < 60)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
