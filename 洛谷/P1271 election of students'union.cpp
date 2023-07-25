#include <bits/stdc++.h>
using namespace std;
const int MAX = 2e6; 
int a[MAX];
int n, m;
int main()
{
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> a[i];
	}
	sort(a, a + m);
	for(int i = 0; i < m; i++){
		cout << a[i] << " ";
	}
	return 0;
 } 
