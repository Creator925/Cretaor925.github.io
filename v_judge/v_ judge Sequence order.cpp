#include<iostream>
using namespace std;
int main()
{
	int n, m;
	while(cin >> n >> m){
		if(n == 0 && m == 0)
			break;
		int i, num[101], temp = 0;
		for(i = 1; i <= n; i++){
			cin >> num[i];
		}
		num[0] = m;
		for(i = 0; i < n; i++){
			if(num[i] > num[i + 1]){
				temp = num[i];
				num[i] = num[i + 1];
				num [i + 1] = temp;
			}
		}
		for(i = 0; i <= n; i++){
			if(i < n)
				cout << num[i] << " ";
			else
				cout << num[i] << "\n";
		}
	}
	return 0;
}