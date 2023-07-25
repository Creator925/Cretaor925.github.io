#include<iostream>
using namespace std;
const int maxn = 5e6 + 10;
int a[maxn];
int b[maxn];
int main()
{
	int n, p;
	cin >> n >> p;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		for(int i = 1; i <= n; i++)
			b[i] = a[i] - a[i - 1];
		while(p--){
			int x, y, z;
			cin >> x >> y >> z;
			b[x] += z;
			b[y + 1] -= z;  
		}
		int mi = 1e6;
		for(int i = 1; i <= n; i++){
			b[i] = b[i] + b[i - 1];
			mi = min(b[i], mi);
		}
		cout << mi << endl; 
	return 0;
 } 
