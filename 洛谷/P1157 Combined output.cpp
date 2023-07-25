#include<bits/stdc++.h> 
using namespace std;
const int MAX = 30;
int a[MAX];
int n, r;
void dfs(int start, int front){
	if(start == r){
		for(int i = 0; i < r; i++){
			cout << setw(3) << a[i];
		}
		cout << endl;
		return;
	}
	for(int i = front + 1; i <= n; i++){
		a[start] = i;
		dfs(start + 1, i);
	}
}
int main(){
	cin >> n >> r;
	dfs(0, 0);
	return 0;
}
