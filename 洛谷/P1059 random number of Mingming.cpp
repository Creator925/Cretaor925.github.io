#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e3 + 10;
int a[MAX], b[MAX];
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int cnt = 0, j = 0;
	for(int i = 0; i < n; i++){
		if(a[i - 1] == a[i])
			continue;
		else
			cnt++;
		if(a[i - 1] != a[i]){
			b[j] = a[i];
			j++;
		}
	}
	cout << cnt << endl;
	for(int i = 0; i < cnt; i++){
		cout << b[i] << " "; 
	}
	cout << endl;
	return 0;
}
