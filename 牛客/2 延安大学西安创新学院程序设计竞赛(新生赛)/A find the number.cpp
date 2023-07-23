#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0, i;
    long long num[100], find;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> num[i];
    }
    cin >> find;
    for(int j = 0; j < n; j++)
        if(num[j] == find)
            cnt++;
    cout << cnt << "\n";
    return 0;
}
