// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/ZEROSTRING
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int T,N;
	scanf("%d",&T);
	for(int j=0;j<T;j++)
	{
	    int count_0=0,i=0,count_1=0;
	    scanf("%d",&N);
	    char *s=malloc((N+1)*sizeof(char));
	    scanf("%s",s);
	    while(s[i]!='\0')
	    {
	        (s[i]=='1')?count_1++:count_0++;    // Count number of 1's and 0's in the string
	        i++;
	    }
	    if(count_1==N)    //If all the characters in the string are 1 , then 1 flip is enough to make them all to 0
	    printf("1\n");
	    else
        (count_1>count_0)?printf("%d\n",count_0+1):printf("%d\n",count_1);   // If no. of 0's are less than no. of 1's convert them to 1 and flip all bits else if no. of 1's is less flip them to 0
        free(s);
	}
	return 0;
}

