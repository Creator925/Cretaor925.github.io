#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if((a+b+c)/3>=60){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}
