#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin >> n){
		int peach = 0;
		for(int i = 1; i <= n; i++){
			peach += 2 * i - 1;
		}		
		cout << peach << "\n";
	}
	return 0;
}
