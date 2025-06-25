// this problem is from LeetCode
//Problem : https://leetcode.com/problems/valid-parentheses/description/
//Solution by Harsha Hegde : 

void push(char c,char* stack,int *top)
{
    stack[++(*top)]=c;
}

char pop(char* stack,int *top)
{
    return stack[(*top)--];
}

bool ismatch(char a,char b)
{
    if(a==')' && b=='(' || a==']' && b=='[' || a=='}' && b=='{')
    return 1;
    else
    return 0;
}

bool isValid(char* s) {
    int i=0, top=-1;
    char* stack=malloc(10000*sizeof(char));
    while(s[i]!='\0')
    {
        char c=s[i];
        if(c=='(' || c=='[' || c=='{')
        {
            push(c,stack,&top);
        }
        else
        {
            if(top== -1)
            return false;
            else
            {
        char popped=pop(stack,&top);
        if(!ismatch(s[i],popped))
        {
        return false;
        }
        }
        }
        i++;
    }
    if(top==-1)
    {
    free(stack);
    return true;
    }
    else 
    {
    free(stack);
    return false;
    }
}
