#include<bits/stdc++.h>
using namespace std;
char a[40][40];
int vis[40][40];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int nx, ny, w, h, cnt=0,xx,yy;

bool check(int x, int y){
	return x >= 1 && x <= h && y >= 1 && y <= w;
}

inline void dfs(int x, int y){
	vis[x][y] = 1;
	for(int i = 0; i < 4; i++){
		nx = x + dx[i];
		ny = y + dy[i];
		if(check(nx,ny) && a[nx][ny] != '#' && vis[nx][ny] != 1){
			dfs(nx, ny);
		}
	}
}

int main()
{
	cin >> w >> h;
	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++){
			cin >> a[i][j];
			if(a[i][j]=='@'){
				xx=i,yy=j;
			}
		}
	}
/*	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++){
			cout << a[i][j];
		}
		cout << endl;
	}*/
/*	for(int i = 1; i <= h; i++){
		for(int j = 1; j <= w; j++){
			if(a[i][j] == '@'){
				//vis[i][j] = 1;
				dfs(i, j);
			//	cnt++;
			}
		}
	}*/
	dfs(xx,yy);
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			if(vis[i][j]==1)cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
