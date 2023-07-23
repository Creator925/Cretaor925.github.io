#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, m, e, cnt = 0;
    cin >> n;
    while(n--){
        cin >> c >> m >> e;
        float ave;
        ave = (c + m + e) / 3;
        if (ave < 60)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
