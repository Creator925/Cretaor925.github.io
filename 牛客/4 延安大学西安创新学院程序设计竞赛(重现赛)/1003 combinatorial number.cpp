#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j, cnt = 0;
    cin >> n >> m;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            if((i + j) % 7 == 0)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
