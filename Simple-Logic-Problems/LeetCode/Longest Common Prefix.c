// this problem is from LeetCode
//Problem : https://leetcode.com/problems/longest-common-prefix/description/
//Solution by Harsha Hegde : 

char* longestCommonPrefix(char** strs, int strsSize) {
    int count=0;
    for(int j=0;j<strlen(strs[0]);j++)
    {
    for(int i=1;i<strsSize;i++)
    {
        if(strs[i][j]!=strs[0][j])
        goto done;                  //Once the mismatch is found stop the coparison and create returnstring
    }
    count++;
    }
done:
char* returnString=malloc((count+1)*sizeof(char));
for(int k=0;k<count;k++)
{
    returnString[k]=strs[0][k];
}
returnString[count]='\0';
return returnString;
}
