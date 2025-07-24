// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERFILLING
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int T,B1,B2,B3;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    scanf("%d %d %d",&B1,&B2,&B3);
	    int sum=B1+B2+B3;
	    if(sum<=1)
	        printf("Water filling time \n");
        else
            printf("Not now \n");
	}
return 0;
}

