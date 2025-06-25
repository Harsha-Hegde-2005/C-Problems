// this problem is from LeetCode
//Problem : https://leetcode.com/problems/palindrome-number/description/
//Solution by Harsha Hegde :

bool isPalindrome(long x) {
    long a=x,sum=0,r;
    while(x!=0 && x>=0)
    {
        r=x%10;
        x=x/10;
        sum=sum*10+r;
    }
    if(sum==a)
    return true;
    else
    return false;
}
