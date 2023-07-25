#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9;
int Pow(int a , int b, int p){
	ll ans = 1 % p;
	while(b){
		if(b & 1)
			ans = ans * a % p;
		a = (ll)a * a % p;
		b >>= 1;
	}
	return ans;
}
int main()
{
	int a, b, p, s;
	cin >> a >> b >> p;
	s = Pow(a, b, p);
	printf("%d^%d mod %d=%d", a, b , p, s);
	return 0;
}
