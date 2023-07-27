#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	while(cin >> n){
		if(n == 0)
			break;
		int num[100], i, j, temp;
		for(i = 0; i < n; i++){
			cin >> num[i];
		}
		for(i = 1; i < n; i++){
			for(j = 0; j < n - 1; j++){
				if(abs(num[j]) <= abs(num[j + 1])){
					temp = num[j + 1];
					num[j + 1] = num[j];
					num[j] = temp;
				}
			}
		}
		for(i = 0; i < n; i++){
			if(i != n - 1)
				cout << num[i] << " ";
			else
				cout << num[i] << "\n";
		}
	}
	return 0;
}