#include<stdio.h>
int main()
{
    int a, b, sum = 0, cnt = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        printf("%5d", i);
        sum += i;
        cnt++;
        if(cnt % 5 == 0 && i != b){
            printf("\n");
        }
    }
    printf("\n");
    printf("Sum = %d\n", sum);
    return 0;
}
