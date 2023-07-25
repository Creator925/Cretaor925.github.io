#include<bits/stdc++.h>
using namespace std;
const int MAX = 2e5;
int parent[MAX], rank[MAX];
int n, m;
void original(int n){
	for(int i = 0; i <= n; i++){
		parent[i] = -1;
		rank[i] = 0;
	}
}
int find(int x){
	int x_root  = x;
	while(parent[x_root] != -1){
		x_root = parent[x_root];
	}
	return x_root;
}
void union_forest(int x, int y){
	int x_root = find(x);
	int y_root = find(y);
	if(x_root == y_root)
		return;
	if(rank[x_root] > rank[y_root])
		parent[y_root] = x_root;
	else{
		parent[x_root] = y_root;
		if(rank[x_root] == rank[y_root])
			rank[y_root]++;
	}
		
}
int main()
{
	cin >> n >> m;
	original(n);
	while(m--){
		int z, x, y;
		cin >> z >> x >> y;
		if(z == 1){
			union_forest(x, y);
		}else{
			if(find(x) == find(y))
				cout << "Y\n";
			else
				cout << "N\n";
		}
		
	} 
	return 0;
}
