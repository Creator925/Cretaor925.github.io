#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 100;
ll dp[MAX][MAX][MAX];
ll w(ll a, ll b, ll c){
	if(a <= 0 || b <= 0 || c <= 0)
		return 1;
	if(a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);
	if(dp[a][b][c] != 0) return dp[a][b][c];
	if(a < b && b < c)
	return dp[a][b][c] = w(a,b,c-1) + w(a, b -1, c - 1) - w(a, b - 1, c);
	else
		return  dp[a][b][c] = w( a - 1, b, c)+ w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}
int main ()
{
    ll a, b, c;
	while(cin >>a >> b >> c){
		if(a == -1 && b == -1 && c == -1)
			break;
			ll ans = w(a, b, c);
			printf("w(%lld, %lld, %lld) = %lld\n", a, b ,c , ans);
	}
	return 0;
}
