#include<iostream>
using namespace std;
const int MAX = 1e4 + 10;
int a[MAX][MAX];
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		int x, y, v;
		cin >> x >> y >> v;
		a[x + 1][y + 1] += v;
	}
	int s = 5010;
	for(int i = 1; i <= s; i++){
		for(int j = 1; j <= s; j++){
			a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
		}
	}
	int max_v = 0;
	for(int i = m; i <= s; i++){
		for(int j = m; j <= s; j++){
			int sum = a[i][j] - a[i - m][j] - a[i][j - m] + a[i - m][j - m];
			max_v = max(sum , max_v);
		}
	}
	cout << max_v << endl;
	return 0;
}
