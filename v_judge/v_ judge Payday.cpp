#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n)){
		if(n == 0)
			break;
		int wage[100], i, paper = 0;
		for(i = 0; i < n; i++){
			cin >> wage[i];
		}
		for(i = 0; i < n; i++){
			paper = paper + wage[i] / 100;
			wage[i] = wage [i] % 100;
			paper = paper + wage[i] / 50;
			wage[i] = wage[i] % 50;
			paper = paper + wage[i] / 10;
			wage[i] = wage [i] % 10;
			paper = paper + wage[i] / 5;
			wage[i] = wage[i] % 5;
			paper = paper + wage[i] / 2;
			wage[i] = wage [i] % 2;
			paper = paper + wage[i];
		}
		cout << paper << "\n";
	}
	return 0;
}