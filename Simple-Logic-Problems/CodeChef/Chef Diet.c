// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/DIET
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int T,N,K,weight,isValid;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    isValid=1;
	    scanf("%d %d",&N,&K);
	    int grams=0;
	    for(int j=1;j<=N;j++)
	    {
	        scanf("%d",&weight);
	        grams+=weight;
	        if(grams<K && isValid)
	        {
	        printf("NO %d \n",j);
	        isValid=0;
	        }
	        grams-=K;
	    }
	    if(isValid)
	    printf("YES \n");
	}
    return 0;
}
