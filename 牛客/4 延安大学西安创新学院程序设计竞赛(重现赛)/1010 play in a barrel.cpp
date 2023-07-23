#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e3;
int h[MAX];
int main()
{
    int n, s, v, min = 100;
    cin >> n >> s;
    //vector<int>h(n);
    for(int i = 0; i < n; i++){
        cin >> h[i];
        if(h[i] < min)
            min = h[i];
    v = s * min;
    }
    cout << v << endl;
    return 0;
}
