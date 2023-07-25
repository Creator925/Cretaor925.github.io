#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 50;
int parent[MAX], Rank[MAX];
int n, m;
void initial(int x){
	for(int i = 0; i <= x; i++){
		parent[i] = i;
		Rank[i] = 0;
	}
}
int find(int a){
	if(parent[a] == a)
		return a;
	else
		return parent[a] = find(parent[a]);
}
void union_tree(int a, int b){
	int x_root = find(a), y_root = find(b);
	if(x_root == y_root)
		return;
	if(Rank[x_root] > Rank[y_root])
		parent[y_root] = x_root;
	else if(Rank[x_root] < Rank[y_root])
		parent[x_root] = y_root;
		else{
			parent[x_root] = y_root;
			Rank[y_root]++;
		}
/*	if(rank[x_root] > rank[y_root])
		parent[y_root] = x_root;
	else{
		parent[x_root] = y_root;
		if(rank[x_root] == rank[y_root])
			rank[y_root]++;
	}*/
}
int main()
{
	cin >> n >> m;
	initial(n);
	while(m--){
		int z, x, y;
		cin >> z >> x >> y;
		if(z == 1)
			union_tree(x, y);
		else{
			if(find(x) == find(y))
				cout << "Y\n";
			else
				cout << "N\n";
		}	 
	}
	return 0;
 } 
