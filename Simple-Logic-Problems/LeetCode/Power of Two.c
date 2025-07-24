// this problem is from LeetCode
//Problem : https://leetcode.com/problems/power-of-two/description/
//Solution by Harsha Hegde : 

bool isPowerOfTwo(int n) {
    if(n<=0)
    return false;
    while(n>1)
    {
        if(n%2==1)
        return false;
        n=n/2;
    }
    return true;
}
