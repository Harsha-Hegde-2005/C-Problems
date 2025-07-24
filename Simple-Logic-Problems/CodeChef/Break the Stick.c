// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/BREAKSTICK
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int T,X,N;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    scanf("%d %d",&X,&N);
	    if(X%2==0)
	    printf("YES \n");
	    else
	    (X%2==1 && N%2==0)?printf("NO \n"):printf("YES \n");
	}
    return 0;
}

