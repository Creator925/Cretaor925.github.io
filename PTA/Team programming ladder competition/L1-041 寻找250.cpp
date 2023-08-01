#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int a[90000];
    int i = 1;
    for(; i<=90000; i++){
        cin >> a[i];
        if(a[i] == 250){
            break;
        }
    }
    cout << i;
    return 0;
}
