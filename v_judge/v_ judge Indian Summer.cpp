#include<bits/stdc++.h>
using namespace std;
//struct Node{
//	int data;
//	struct Node* next;
//};
map<string, int> m;
int main()
{
	int n;
	cin >> n;
	string a;
	cin.get();
	while(n--){
		getline(cin, a);
		m[str] = 1;
	}
	int cnt = 0;
	for(map<string, int>::iterator it = m.begin(); it != m.end();++it)
	{
		cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
