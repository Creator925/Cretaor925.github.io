#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while( scanf("%d", &n)){
		int a[100] {0, 1, 2, 3, 4};
		if(n == 0)
			break;
		for(int i = 4; i <= n; i++){
			a[i] = a[i - 1] + a[i - 3];
		}
		cout << a[n] << endl;
	}
	return 0;
}