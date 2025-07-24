// this problem is from LeetCode
//Problem : https://leetcode.com/problems/valid-palindrome/description/
//Solution by Harsha Hegde : 

bool isPalindrome(char* s) {
    char *s1=malloc((strlen(s)+1)*sizeof(char));
    int k=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        s1[k++]=s[i];
        else if (s[i]>='A' && s[i]<='Z')
        s1[k++]=s[i]+32;
        else if(s[i]>='0' && s[i]<='9')
        s1[k++]=s[i];
    }
    s1[k]='\0';
    int m=0,n=k-1;
    while(m<=n)
    {
        if(s1[m++]!=s1[n--])
        return false;
    }
    return true;
}
