// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EXAMTIME
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int T,DSA1,TOC1,DM1,DSA2,TOC2,DM2;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    scanf("%d %d %d",&DSA1,&TOC1,&DM1);
	    int total1=DSA1+TOC1+DM1;
	    scanf("%d %d %d",&DSA2,&TOC2,&DM2);
	    int total2=DSA2+TOC2+DM2;
	    if(DSA1==DSA2 && TOC1==TOC2 && DM1==DM2)
	        printf("TIE \n");
	    else if((total1>total2) || (total1==total2 && DSA1>DSA2) || (total1==total2 && DSA1==DSA2 && TOC1>TOC2))
	        printf("DRAGON \n");
	    else
	        printf("SLOTH \n");
	}
return 0;
}
