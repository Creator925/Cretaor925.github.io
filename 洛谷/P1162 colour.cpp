#include<bits/stdc++.h>
using namespace std;
int a[40][40];
int vis[40][40];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int nx, ny, n;
void dfs(int x, int y){
	//cout << x << " " << y << endl; 
	for(int i = 0; i < 4; i++){
		nx = x + dx[i];
		ny = y + dy[i];
		if(nx >= 1 && nx <= n && ny >= 1 && ny <= n && a[nx][ny] == 0){
			a[nx][ny] = 3;
			dfs(nx, ny);
		}
	}
}
int main()
{
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];

		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || i == n || j == 1 || j == n){
				if(a[i][j] == 0){
					a[i][j] == 3;
					dfs(i, j);
				}
			}
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == 3)
				cout << 0 << " ";
			else if(a[i][j] == 0)
				cout << 2 << " ";
			else
				cout << 1 << " ";
		}
		cout << "\n";
	}
	return 0 ;
}
