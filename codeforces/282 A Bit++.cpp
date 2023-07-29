#include<bits/stdc++.h>
using namespace std;
int x;
int main()
{
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		int len = s.size();
		if(s[0] == '+')
			++x;
		else if(s[0] == '-')
			--x;
		else if(s[len - 1] == '-')
			x--;
		else if(s[len - 1] == '+')
			x++;
		
	}
	cout << x << endl;
	return 0;
}
