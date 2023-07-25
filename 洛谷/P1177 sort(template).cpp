#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e5;
typedef long long ll;
ll a[MAX];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for(int i = 0; i < n; i++)
		if( i != n)
			cout << a[i] << " "; 
	cout << endl; 
	return 0;
 } 
