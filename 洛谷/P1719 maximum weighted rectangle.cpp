#include<iostream>
#include<algorithm>
using namespace std;
const int MAX = 130;
int a[MAX][MAX], b[MAX][MAX];
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
		}
	}
	int sum = 0, max_v = -1e8 - 10;
	for(int x1 = 1; x1 <=n; x1++){
		for(int y1 = 1; y1 <=n; y1++){
			for(int x2 = x1; x2 <=n; x2++){
				for(int y2 = y1; y2 <=n; y2++){
					sum = b[x2][y2] - b[x1 - 1][y2] - b[x2][y1 - 1] + b[x1 - 1][y1 - 1];
					max_v = max(sum , max_v);
				}
			}
		}
	}
	cout << max_v << endl; 
	return 0;
}
