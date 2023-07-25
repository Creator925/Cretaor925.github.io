#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pai;
const int MAX = 2e4 + 10;
pai a[MAX];
int n, l, r,sum = 0;

bool cmp(const pai a,const pai b){
 	return a.first < b.first;
 }
 
int main()
{
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> l >> r;
		a[i].first = l;
		a[i].second = r;
	}
	sort(a, a + n, cmp);
	l = a[0].first;
	r = a[0].second;
	for(int i = 0; i < n; i++){
		if(r >= a[i].first)
			r = max(r, a[i].second);
		else{
			sum += r - l;
			l = a[i].first;
			r = a[i].second;
		}
	}
	sum += r - l;
	cout << sum;
	return 0;
}
