#include<bits/stdc++.h>
using namespace std;
const int MAX = 5e6 +  10;
int n, k, a[MAX];

int quick_sort(int a[], int l, int r){
	int left = l, right = r;
	int temp = a[left];
	while (left < right){
		while(left < right && a[right] >= temp)
			--right;
		if(a[right] < temp)
			a[left] = a[right];
		while(left < right && a[left] <= temp)
			++left;
		if(a[left] > temp)
			a[right] = a[left];
		if(left >= right)
			a[left] = temp;
	}
	return left;
}

int main()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	quick_sort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	printf("%d\n", a[k]);
	return 0;
}
