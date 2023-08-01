#include<bits/stdc++.h>
int main()
{
    int a, b, p =1;
    std:: cin >> a >> b;
    for(int i = 1; i <= (a+b); i++){
        p *= i;
    }
    std:: cout << p;
    return 0;
}
