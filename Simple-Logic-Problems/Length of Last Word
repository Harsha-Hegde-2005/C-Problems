// this problem is from LeetCode
//Problem : https://leetcode.com/problems/length-of-last-word/description/
//Solution by Harsha Hegde : 

int lengthOfLastWord(char* s) {
    int i=0;
    int word_length=0 , prev_word_length=0;
    while(s[i]!='\0')
    {
    if(s[i]!=' ')
    {
        word_length++;
    }
    else
    {
        prev_word_length=word_length;       //this will assign the word_length to prev_word_length whenever the first space occurs
        if(s[i+1]!=' ')                     //this line is to not updating the word_length for multiple spaces
        word_length=0;
    }
    i++;
    }
    if(s[i-1]==' ') 
        return prev_word_length;
    else 
        return word_length;
}
