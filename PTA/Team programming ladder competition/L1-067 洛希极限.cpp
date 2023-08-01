#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a, c, product;
    int b;
    cin >> a >> b >> c;
    if(b == 0){
        product = a * 2.455;
    }else {
        product = a * 1.26;
    }if(product < c){
        printf("%.2f ^_^", product);
    }else{
        printf("%.2f T_T", product);
    }
    return 0;
}
