// this problem is from LeetCode
//Problem : https://leetcode.com/problems/climbing-stairs/description/
//Solution by Harsha Hegde : 

int climbStairs(int n) {
    if(n<=2)
    return n;
    else
    {
        int n1=1,n2=2;
        for(int i=0;i<n-2;i++)
        {
            int temp=n2;
            n2=n1+n2;
            n1=temp;
        }
    return n2;
    }
 }
