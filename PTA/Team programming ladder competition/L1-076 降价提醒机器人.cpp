#include<bits/stdc++.h>
int main()
{
    int n, m;
    float p;
    std:: cin >> n >> m;
    while(n--){
        std:: cin >> p;
        if(m > p){
            printf("On Sale! %.1f\n", p);
        }
    }
    return 0;
}
