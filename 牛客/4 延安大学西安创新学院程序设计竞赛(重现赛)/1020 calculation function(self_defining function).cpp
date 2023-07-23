#include<bits/stdc++.h>
using namespace std;
int max(int x, int y, int z){
	if(x > y)
        if(x > z)
            return x;
        else
            return z;
    else
        if(y > z)
            return y;
        else
            return z;
}
int main()
{
	int a, b, c;
	float m;
	cin >> a >> b >> c;
	m = max(a + b, b, c) * 1.0 / (max( a, b + c, c) + max(a, b, b + c));
	printf("%.2f\n", m);
	return 0;
}
