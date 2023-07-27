#include<iostream>
using namespace std;
int main()
{
	int n;
	
	while(scanf("%d", &n) != EOF){
		int sum = 1;
		for(int i = 1; i < n; ++i){
			sum = 2 * ( sum + 1 );
		}
		cout << sum << "\n";
	}
	return 0;
}