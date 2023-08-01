#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    float consult = 0;
    cin >> a >> b;
    if(b != 0){
        consult = a *1.0 / b;
        if(b < 0)
        printf("%d/(%d)=%.2f\n", a, b, consult);
        else   printf("%d/%d=%.2f\n", a, b, consult);
    }else{
        printf("%d/%d=Error\n", a, b);
    }

    return 0;
}
