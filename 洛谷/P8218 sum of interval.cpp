#include<iostream>
using namespace std;
const int MAX = 1e5 + 10;
int a[MAX];
int b[MAX];
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++)
		b[i] = b[i - 1] + a[i];
	int m;
	cin >> m;
	while(m--){
		int l, r, sum = 0;
		cin >> l >> r;
		sum = b[r] - b[l - 1];
		cout << sum << endl;
	}
	return 0;
 } 
