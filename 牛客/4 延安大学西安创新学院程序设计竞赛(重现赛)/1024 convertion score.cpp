#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, grade;
    cin >> n;
    if(n >= 0 && n <= 100){
    grade = n / 10;
    switch(grade){
        case 10:;
        case 9:printf("A\n");
            break;
        case 8:printf("B\n");
            break;
        case 7:printf("C\n");
            break;
        case 6:printf("D\n");
            break;
        default:printf("E\n");
        }
    }else
        printf("F\n");
    return 0;
}
