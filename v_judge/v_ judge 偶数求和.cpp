#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m, n;
	while(scanf("%d%d", &n, &m) != EOF){
		int sum = 0, a = 0, cnt = 0;
		for(int i = 0; i < n; i++){
			a += 2;
			sum += a;
			cnt++;
			if(cnt == m && i != n - 1){
				cout << sum / m << " ";
				sum = 0;
				cnt = 0;
			}
		}
		if(cnt){
			cout << sum / cnt << "\n";
		}
	}
	return 0;
}