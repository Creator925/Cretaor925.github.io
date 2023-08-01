#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    string a;
    int bre, m;
    while(n--){
        cin >> a;
        scanf("%d%d", &bre, &m);
        if((bre < 15 || bre > 20) || (m < 50 || m >70)){
            cout << a <<endl;
        }
    }
    return 0;
}
