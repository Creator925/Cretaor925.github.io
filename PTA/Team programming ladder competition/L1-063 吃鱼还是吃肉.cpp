#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n, sex, h, w;
    cin >> n;
    while(n--){
        cin >> sex >> h >> w;
        if(sex == 0){
             if(h < 129)
                 printf("duo chi yu! ");
             if(h == 129)
                 printf("wan mei! ");
             if(h > 129)
                printf("ni li hai! ");
             if(w < 25)
                printf("duo chi rou!\n");
             if(w == 25)
                printf("wan mei!\n");
             if(w > 25)
                printf("shao chi rou!\n");
        }
        else{
            if(h < 130)
                 printf("duo chi yu! ");
             if(h == 130)
                 printf("wan mei! ");
             if(h > 130)
                printf("ni li hai! ");
             if(w > 27)
                printf("shao chi rou!\n");
             if(w == 27)
                printf("wan mei!\n");
             if(w < 27)
                printf("duo chi rou!\n");
        }
    }
    return 0;
}
