#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, min = 0;
    cin >> a >> b >> c;
    if(a  < b)
        if(a < c)
            min = a;
        else
            min = c;
    else
        if(b < c)
            min = b;
        else
            min = c;
    cout << min << endl;
    return 0;
}
