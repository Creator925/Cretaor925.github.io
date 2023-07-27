#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--) {
		int n, msum = 0, bsum = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			int num, mkey = 0, bkey = 0;
			cin >> num;
			if(num % 2 == 0){
				mkey = num;
				msum += mkey;
			}else{
				bkey = num;
				bsum += bkey;
			}
		}
		if(msum > bsum)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}
