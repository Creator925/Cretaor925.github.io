#include<bits/stdc++.h>
using namespace std;
const int MAX = 5e3 + 10;
int a[MAX], rank[MAX], rx, ry;


int find(int x){
	if(x == a[x])
		return x;
	else
		return find(a[x]);
}


int union_forest(int x, int y){
	rx = find(x);
	ry = find(y);
	if(rank[rx] <= rank[ry])
		a[rx] = ry;
	else if(rank[rx] > rank[ry])
		a[ry] = rx;
	if(rank[rx] == rank[ry] && rx != ry)
		++rank[ry];
}

int main()
{
	int n, m, p;
	cin >> n >> m >> p;
	for(int i = 1; i <= n; ++i){
		a[i] = i;
		rank[i] = 1;
	}
	while(m--){
		int mi, mj;
		cin >> mi >> mj;
		union_forest(mi, mj);
	}
	for(int i = 1; i <= p; ++i){
		int pi, pj;
		cin >> pi >> pj;
		if(find(pi) == find(pj))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
 } 
