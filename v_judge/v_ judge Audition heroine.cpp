#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long  m, n;
	while(scanf("%ld %ld", &m,&n) != EOF){
		 long long i, j, score = 0, max = 0, line, column, grade;
		for(i = 1; i <= m; i++){
			for(j = 1; j <= n; j++){
				cin >> score;
				if(abs(score) > max){
					max = abs(score);
					grade = score;
					line = i;
					column = j;
				}
			}
		}
		cout << line << " " << column  << " " << grade << endl;
	}
	return 0;
}