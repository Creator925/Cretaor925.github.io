#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if(x + y != x + z){
        if(x + y < x + z)
            cout << x + y << "\n";
        else
            cout << x + z << "\n";
    }
    else 
        cout << x + y << "\n";
    return 0;
}
