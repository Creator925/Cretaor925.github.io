#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Pa, Pb, a, b, c;
    int P2;
    cin >> Pa >> Pb;
    cin >> a >> b >> c;
    P2 = a + b + c;
    if(P2 == 3){
        printf("The winner is b: %d + %d", Pb, P2);
    }else if(P2 == 0){
        printf("The winner is a: %d + %d",Pa, 3 - P2);
    }else if(a > b){
        printf("The winner is a: %d + %d", Pa, 3 - P2);
    }else{
        printf("The winner is b: %d + %d", Pb, P2);
    }
    return 0;
}
