// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINPIZZA
//Solution by Harsha Hegde : 

#include <stdio.h>
#include<math.h>

int main() {
	int T,N,X;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    scanf("%d %d",&N,&X);
	    printf("%d\n",(int)ceil((N*X)/4.0));
	}
return 0;
}

