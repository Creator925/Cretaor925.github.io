#include<iostream>
using namespace std;
int main()
{
	int t, a, b, sum = 0;
	cin >> t;
	while(t--){
		scanf("%d+%d", &a, &b);
		sum = a + b;
		cout << sum <<"\n";
	}
	return 0;
}
