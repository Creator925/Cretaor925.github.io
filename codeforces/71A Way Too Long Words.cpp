#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--){
		int cnt = 0;
		string s;
		cin >> s;
		if(s.size() > 10){
			for(int i = 0; i < s.size(); i++){
				cnt++;
			}
			cout << s[0] << cnt - 2 << s[cnt- 1] << endl;
		}
		else{
			cout << s << endl; 
		}
		
	}
	return 0;
}
