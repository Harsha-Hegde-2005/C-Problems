// this problem is from LeetCode
//Problem : https://leetcode.com/problems/excel-sheet-column-title/description/
//Solution by Harsha Hegde : 

char* convertToTitle(int columnNumber) {
    char *s=malloc(20*sizeof(char));
    int k=0,r=0,isMultiple;
    while(columnNumber!=0)
    {
        columnNumber--;      //adjusting to zero based indexing
        r=columnNumber%26;
        s[k++]=r+'A';
        columnNumber=columnNumber/26;    
    }
    s[k]='\0';
    char *c=malloc(strlen(s)+1*sizeof(char));
    int m=0;
    for(int i=k-1;i>=0;i--)   //reversing the string
    {
        c[m++]=s[i];
    }
    c[m]='\0';
    return c;
}
