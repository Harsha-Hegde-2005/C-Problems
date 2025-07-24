// this problem is from LeetCode
//Problem : https://leetcode.com/problems/ugly-number/description/
//Solution by Harsha Hegde : 

bool isUgly(int n) {
    if(n<1)
    return false;
    while(n>5)
    {
        if(n%5==0)
        n=n/5;
        else if(n%3==0)
        n=n/3;
        else if(n%2==0)
        n=n/2;
        else
        return false;
    }
    return true;
}
