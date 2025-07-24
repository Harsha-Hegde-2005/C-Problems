// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ENCMSG
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int T,N,i;
	char *S;
	scanf("%d",&T);
	for(int j=0;j<T;j++)
	{
	    i=0;
	    scanf("%d",&N);
	    S=malloc((N+1)*sizeof(char));
	    scanf("%s",S);
	    while(S[i+1]!='\0')
        {
            char temp=S[i];
            S[i]=S[i+1];
            S[i+1]=temp;
            i=i+2;
        }
        for(int k=0;S[k]!='\0';k++)
        {
            printf("%c",('z'-S[k])+'a');
        }
        printf("\n");
	}
	free(S);
	return 0;
}

