#include<iostream>
using namespace std;
int main()
{
	
	int n, q, i, j, k;
	cin >> n >> q;
	long long a[n+1],b[n+1], sum = 0, total = 0, differ = 0;
	b[0]=0;
	for(i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
		b[i]=b[i-1]+a[i];
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<b[y]-b[x-1]<<endl;
	}
	
	return 0;
}