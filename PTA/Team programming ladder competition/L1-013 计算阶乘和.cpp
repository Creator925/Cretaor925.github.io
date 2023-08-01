#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p = 1, sum = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        p *= i;
        sum += p;
    }
    cout << sum << endl;
    return 0;
}
