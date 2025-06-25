// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ATM2
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int T,N,K,stop;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    scanf("%d %d",&N,&K);
	    int *A=malloc(N*sizeof(int));
	    for(int j=0;j<N;j++)
	    {
	        scanf("%d",&A[j]);
	        if(A[j]<=K)
	        {
	            printf("1");
	            K=K-A[j];
	        }
	        else
	        printf("0");
	    }
	    printf("\n");
	    free(A);
	}
}


