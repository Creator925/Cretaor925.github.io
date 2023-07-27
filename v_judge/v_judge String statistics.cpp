#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	while(cin >> n){
		char s[500];
		for(int i = 0; i < n; i++){
			cin >> s;
			int cnt = 0;
			int k = strlen(s);
			for(int i = 0; i < k; i++){
				if(s[i] >= '0' && s[i] <= '9'){
					cnt++;
				}
			}
			cout << cnt << endl;
		}
	}
	return 0;
}