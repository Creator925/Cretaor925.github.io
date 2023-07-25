#include<iostream>
using namespace std;
const int MAX = 1e3 + 10;
int a[MAX][MAX];
int main()
{
	int n, m;
	cin >> n >> m;
	while(m--){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int i = x1; i <= x2; i++){
			a[i][y1]++;
			a[i][y2 + 1]--;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			a[i][j] = a[i][j - 1] + a[i][j];
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
