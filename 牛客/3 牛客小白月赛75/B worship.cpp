#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y, worship = 0;
    cin >> n >> x >> y;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= x && a[i] >= y){
            continue;
        }
        if(a[i] > y)
            worship += 3;
    }
    cout << worship << "\n";
    return 0;
}
