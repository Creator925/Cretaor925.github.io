#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        int pro = 1;
        for(int j = 1; j <= i; j++){
        pro *= j;
        }
        sum += pro;
    }
    cout << sum << endl;
    return 0;
}
