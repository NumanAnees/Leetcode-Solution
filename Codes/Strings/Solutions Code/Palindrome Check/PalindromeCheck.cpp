char toLower(char ch)
{
    if(ch >='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string s)
{
   int start=0;
   int end = s.length()-1;
    while(start<end)
    {
        if(!((s[start]>='a' && s[start]<='z' )|| (s[start]>='A' && s[start]<='Z')||(s[end]>='0'&&s[end]<='9')))
        {
            start++;        	
        }
       else if(!((s[end]>='a' && s[end]<='z' ) || (s[end]>='A' && s[end]<='Z')||(s[end]>='0'&&s[end]<='9')))
       {
			end--;        	
        }
       else{
        if(toLower(s[start])!=toLower(s[end]))
        {
            return 0;
        }
        else{
            start++;
            end--;
        }    
       }
    }
    return 1;
}