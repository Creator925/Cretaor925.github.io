#include<iostream>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) != EOF){
		int a[100], max = 0, min = 100, i, sum = 0;
		double ave;
		for(i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > max) max = a[i];
			if(a[i] < min) min = a[i];
			sum += a[i];
		}
//		cout << "sum " << sum << " " << "max" << max << " " 
//			<< "min" << min << endl;
		sum = sum - max - min;
		ave = sum * 1.0 / (n - 2);
		printf("%.2lf\n", ave);
	}
	return 0;
}