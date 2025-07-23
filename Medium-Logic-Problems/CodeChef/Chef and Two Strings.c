// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTLT
//Solution by Harsha Hegde :  

#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    char *s1=malloc(101*sizeof(char));
	    char *s2=malloc(101*sizeof(char));
	    scanf("%s %s",s1,s2);
	    int count1=0,count2=0;
	    for(int i=0;i<strlen(s1);i++)
	    {
	        if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i])
	        count1++;
	        if(s1[i]!='?' && s2[i]!='?' && s1[i]==s2[i])
	        count2++;
	    }
	    printf("%d %d\n",count1,strlen(s1)-count2);
	    free(s1);
	    free(s2);
	}
	
}

