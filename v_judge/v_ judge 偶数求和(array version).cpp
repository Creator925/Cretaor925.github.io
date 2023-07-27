#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, m;
	int a[100] ={0};
	while(scanf("%d%d", &n, &m) != EOF){
		int sum = 0, cnt = 0;
		for(int i = 0; i <= n;i++){
			a[i] += 2;
			sum += a[i];
			cnt++;
			if(cnt == m && i != n - 1){
				cout << sum / m << " ";
				sum = 0;
				cnt = 0;
			}
		}
		if(cnt){
			cout << sum / cnt << endl;
		}
	}
	return 0;
}