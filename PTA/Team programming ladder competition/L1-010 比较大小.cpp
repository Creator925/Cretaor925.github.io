#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
        //cout << arr[i] << " ";
    }
    sort(arr, arr+3);
    cout << arr[0] << "->" << arr[1] << "->" << arr[2];
    cout << endl;
    /*for(int i = 0; i < 3; i++){
        int temp;
        if(arr[i] > arr[i + 1]){
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
            printf("%d->", arr[i]);
    }*/
    return 0;
}
