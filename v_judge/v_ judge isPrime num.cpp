#include<iostream>
using namespace std;
int main()
{
	int x, y;
	
	while(cin >> x >> y){
		if(x == 0 && y == 0)
			break;
			
		int num, isPrime = 0;
		
		for(int i = x; i <= y; i++){
			num = i * i + i + 41;
			
			for(int j = 2;j < num - 1; j++){
				
				if(num % j == 0){
					isPrime = 1;
					break;
				}
			}
			if(isPrime == 1){
				break;
			}	
		}
		if(isPrime == 1) cout << "Sorry\n";
		else cout << "OK\n";
	}
	return 0;
}