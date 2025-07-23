// this problem is from CodeChef
//Problem : https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CANDY123
//Solution by Harsha Hegde : 

#include <stdio.h>

int main() {
	int A,B,T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	      scanf("%d %d",&A,&B);
	      int turn = 1;
while (1) {
    if (turn % 2 != 0) { 
        if (A < turn) {
            printf("Bob\n");
            break;
        }
        A -= turn;
    } else { 
        if (B < turn) {
            printf("Limak\n");
            break;
        }
        B -= turn;
    }
    turn++;
}

	}
    return 0;
}

