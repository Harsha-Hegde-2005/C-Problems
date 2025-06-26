// this problem is from LeetCode
//Problem : =https://leetcode.com/problems/sqrtx/description/
//Solution by Harsha Hegde : 

//this algorithm is based on finding the square root by the method of subtraction

int mySqrt(int x) {
    int count=0,odd=1;
    while(x>=odd)
    {
        count++;
        x=x-odd;
        odd+=2;
    }
    return count;
}
