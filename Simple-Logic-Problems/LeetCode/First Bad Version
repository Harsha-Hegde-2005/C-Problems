// this problem is from LeetCode
//Problem : https://leetcode.com/problems/first-bad-version/description/
//Solution by Harsha Hegde : 

//Logic : Binary Search

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int low=1,high=n;
    while(low<high)
    {
        int mid=low+(high-low)/2;
        if(isBadVersion(mid))
        high=mid;
        else
        low=mid+1;
    }
return low;
}
