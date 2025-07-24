// this problem is from LeetCode
//Problem : https://leetcode.com/problems/excel-sheet-column-number/description/
//Solution by Harsha Hegde : 

int titleToNumber(char* columnTitle) {
    int columnNumber=0;
    for(int j=0;j!=strlen(columnTitle);j++)
    {
        columnNumber=26*columnNumber+(columnTitle[j]-65+1);
    }
    return columnNumber;
}
