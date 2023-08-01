#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","fu"};
    string s;
    cin>>s;
    int x=s.size();
    for(int i=0;i<x-1;i++){
        if(s[i]=='-')
            cout<<"fu ";
        else
            cout<<a[s[i]-48]<<" ";
    }
    cout<<a[s[x-1]-'0'];
}
