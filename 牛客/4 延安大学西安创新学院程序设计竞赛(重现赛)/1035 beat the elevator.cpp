#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, val = 0, remainder = 0, min = 0;
    cin >> n;
    val = n / 12;
    remainder = n % 12;
    min = 4 * val + 2;
    cout << min << endl;
    return 0;
}
