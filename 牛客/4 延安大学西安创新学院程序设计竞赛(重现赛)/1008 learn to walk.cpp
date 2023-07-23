#include<bits/stdc++.h>
using namespace std;
int a[110];
int main()
{
    int n;
    cin >> n;
    //vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        printf("%c", a[i]);
    }
    cout << endl;
    return 0;
}
