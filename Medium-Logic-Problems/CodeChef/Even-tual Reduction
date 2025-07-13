// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EVENTUAL
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int N,isValid=1;    // IsValid flag to print YES at the last if everything is correct
	    scanf("%d",&N);
	    char *s=malloc((N+1)*sizeof(char));
	    scanf("%s",s);
	    if(N%2==1)        // If N is odd directly print NO
	    {
	    printf("NO \n");
	    isValid=0;      // set isVlaid flag to zero
	    }
	    else
	    {
	        int arr[26]={0};      // If N is even create a frequency array to store the frequecies of the characters
	        for(int j=0;j<N;j++)
	        {
	            arr[s[j]-'a']++;    // stores the frequencies in alphabetichal order
	        }
	        for(int k=0;k<26;k++)
	        {
	            if(arr[k]%2==1)    // Checks whether the frequency is odd or not
	            {
	                printf("NO \n"); 
	                isValid=0;    // set isVlaid flag to zero
	                break;
	            }
	        }
	    }
	    if(isValid)
	    printf("YES \n");
	    free(s);
	}
	return 0;
}

