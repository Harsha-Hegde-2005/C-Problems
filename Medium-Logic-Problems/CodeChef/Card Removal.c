// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/REMOVECARDS
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	 int T;
     scanf("%d",&T);
     for(int i=0;i<T;i++)
     {
        int arr[11]={0}; // Frequency array for card values (1 to 10)
        int N,A,max_frequency=0;
        scanf("%d",&N);
        
        // Read card values and update frequency array
        for(int j=0;j<N;j++)
        {
            scanf("%d",&A);
            arr[A]++;
        }
        
        // Find the maximum frequency
        for(int k=0;k<=10;k++)
        {
            max_frequency=(arr[k]>max_frequency)?arr[k]:max_frequency;
        }
        
        // Calculate and print the minimum number of moves
        printf("%d\n",N-max_frequency);
     }
     return 0;
}



