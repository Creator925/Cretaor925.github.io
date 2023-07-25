#include<bits/stdc++.h>
using namespace std;
int n, m;
const int MAX = 1e4 + 10;
char a[MAX][MAX];
int vis[MAX][MAX];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int cnt, nx, ny;
void dfs(int x, int y){
	vis[nx][ny] = 1;
	for(int i = 0; i < 4; i++){
		nx = x + dx[i]; 
		ny = y + dy[i];
		if(nx >= 1 && ny >= 1 && nx <= n && ny <= m && a[nx][ny]!='0'&&vis[nx][ny]==0){
			
			dfs(nx, ny);
		}
	}
	return ;
}
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j]!='0' &&vis[i][j]==0){
			//	vis[i][j] = true;
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
