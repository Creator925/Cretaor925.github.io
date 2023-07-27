#include<iostream>
using namespace std;
int main()
{
	int m, n;
	while(cin >> m >> n){
		int cnt = 0; 
				for(int i = m; i <= n; i++){
				int key, sum = 0, remainder = 0;
				key = i;
				while(key!=0){
				remainder = key % 10;
				sum += remainder * remainder * remainder;
				key /= 10;
				}
				if(sum == i){
					cnt++;
					if(cnt != 1)cout << " " << i;
					else cout << i;
				}
			}
			if(cnt == 0) cout << "no" <<"\n";
			else cout << "\n";
		}
	return 0;
}
