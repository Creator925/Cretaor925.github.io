#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin >> n){
		int num[100], i, j, k, exchange = 0, temp;
		if(n ==0)
			break;
		for(i = 0; i < n; i++){
			cin >> num[i];
		}
		int min = num[0];
		for(j = 0; j < n; j++){
			if(num[j] < min){
				min = num[j];
				exchange = j;
			}
		}
		if(min != num[0]){
			temp = num[exchange];
			num[exchange] = num[0];
			num[0] = temp;
		}
		for(i = 0;i < n; i++){
			if(i == n - 1)
				cout << num[i];
			else
				cout << num[i] <<" ";
		}
		cout << endl;
	}
	return 0;
}