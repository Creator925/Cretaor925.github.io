#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    unsigned int num;
    int odd = 0, even = 0;
    cin >> n;
    while(n--){
        cin >> num;
        //cout << num << " ";
        if(num % 2 ==0)
            even++;
        else{
            odd++;
        }
            
    }
        cout << "" << odd << " " << even << endl;
    return 0;
}
