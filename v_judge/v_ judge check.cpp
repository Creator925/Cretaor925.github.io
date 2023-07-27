#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--){
		char ch;
		cin >> ch;
		if(ch == 'c' || ch == 'd' || ch == 'e' ||ch == 'f' || ch == 'o' ||ch == 'r' || ch == 's')
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}
