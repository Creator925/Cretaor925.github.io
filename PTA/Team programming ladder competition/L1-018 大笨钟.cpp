#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, h;
    scanf("%d:%d", &h, &m);
    if(h <= 12){
        printf("Only %02d:%02d.  Too early to Dang.\n", h, m);
    }
    else{
        if(m == 0){
			for(int i = 0; i < h - 12; i++){
                cout << "Dang";
            }
        }
        else{
             for(int i = 0; i < h - 11; i++){
                cout << "Dang";
                }
            }
    }
    return 0;
}
