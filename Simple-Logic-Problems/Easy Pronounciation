// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EZSPEAK
//Solution by Harsha Hegde : 

#include <stdio.h>
#include<stdlib.h>

int main() {
	int T,N;
	char* S;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    scanf("%d",&N);
	    S=malloc((N+1)*sizeof(char));
	    scanf("%s",S);
	    int consonants=0 , j=0;
	    while(S[j]!='\0')
	    {
	        if(S[j]!='a' && S[j]!='e' && S[j]!='i' && S[j]!='o' && S[j]!='u')
	        consonants++;
	        else
	        consonants=0;
	        if(consonants==4)
	        {
	            printf("NO \n");
	            break;
	        }
	        j++;
	    }
	    if(consonants<4)
	        printf("YES \n");
	}
return 0;
}


