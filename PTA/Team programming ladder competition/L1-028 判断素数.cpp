#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, num,i;
    cin >> n;
    while(n--){
        cin >> num;
       int isPrime = 1;
        if(num == 1){
            isPrime = 0;
        }
        if(num == 2) isPrime =1;
        else{
            for( i = 2; i <= sqrt(num); i++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
          }
        }
        
        if(isPrime == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
