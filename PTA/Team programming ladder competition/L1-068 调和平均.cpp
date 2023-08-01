#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float num;
    double sum = 0, ave = 0;
   for(int i = 0; i < n; i++){
       cin >> num; 
       sum += 1 / num;
       ave = 1 / (sum / n);
   }
    printf("%.2lf", ave);
    return 0;
}
