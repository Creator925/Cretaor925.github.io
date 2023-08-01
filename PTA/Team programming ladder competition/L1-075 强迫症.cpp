#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n, m, y,y1;
    cin >> n;
    m = n % 100;
    y = n / 100;
    //cout << y << endl;
    if( y >= 1000)
        printf("%d-%02d", y, m);
    else{
    if( y < 22){
        y += 2000;
        printf("%d-%02d", y, m);
    }else{
        y +=  1900;
        printf("%d-%02d", y, m);
    }
    }
    return 0;
}
