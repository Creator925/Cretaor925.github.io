#include<iostream>
using namespace std;
const int M = 1010;
int a[M][M];
int b[M][M];
int main()
{
	int n, m, c;
	cin >> n >> m >> c;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
		}
	}
	int temp=-1e9;int tx, ty;
	for(int x1 = 1; x1+c-1 <= n; x1++){
		for(int y1= 1; y1+c-1<= m; y1++){
			int x2=x1+c-1;
			int y2=y1+c-1;
			
			int sum =b[x2][y2]-b[x1-1][y2]-b[x2][y1-1]+b[x1-1][y1-1];
			if(temp<sum){
				temp=sum;
				tx=x1;
				ty = y1;
			}
		}
	}
	cout << tx<< " " << ty << endl;
	return 0;
}
