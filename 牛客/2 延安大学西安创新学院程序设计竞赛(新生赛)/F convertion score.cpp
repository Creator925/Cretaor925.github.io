#include<bits/stdc++.h>
using namespace std;
int main()
{
    int score, grade = 0;
    cin >> score;
    if(score < 0 || score > 100)
        cout << "F" << "\n";
    else{
        grade = score / 10;
        switch(grade){
            case 10:;
            case 9:
                cout << "A" << "\n";
                break;
            case 8:
                cout << "B" << "\n";
                break;
            case 7:
                cout << "C" << "\n";
                break;
            case 6:
                cout << "D" << "\n";
                break;
            default:
                cout << "E" << "\n";
                break;
        }
    }
    return 0;
}
