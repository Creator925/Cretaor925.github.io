#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char sex;
    double h, Fh , Mh ;
    for(int i=1;i<=n;i++){
        //getchar();
        cin >> sex >> h;
        if(sex == 'F'){
             Fh = h*1.09;
            printf("%.2lf\n", Fh);
        }else {
           Mh = h / 1.09;
            printf("%.2lf\n", Mh);
        }
    }
    
    return 0;
}
