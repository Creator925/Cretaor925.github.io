#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e3 + 10;
int n, k, cnt = 0, a[MAX];

int isPrime(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0)
			return 0;
	}
	return 1;
}

void dfs(int start, int num, int sum){
	//cout << start << " ";
	if(num == k && isPrime(sum))
		cnt++;
	for(int i = start; i < n; i++){
		dfs(i + 1, num + 1, sum + a[i]);
	}
}
int main()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
		cin >> a[i];
/*	for(int i = 0; i < n; i++)
		cout << a[i] << " ";*/
	dfs(0, 0, 0); 
	cout << cnt << endl;
	return 0;
}
