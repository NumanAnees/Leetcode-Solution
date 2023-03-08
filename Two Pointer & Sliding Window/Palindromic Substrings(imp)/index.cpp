class Solution {
public:
    //Use two pointers approach
    int countSubstrings(string s) 
    {
        int left, right, count=0, n=s.size();
        
        //iterate over whole string
        for(int i=0; i<n; i++)
        {
            //for odd length palindrome substring
            left=i; right=i;
            while(left>=0 && right<n && s[left--]==s[right++]) count++;
            //doing odd even simultanously in one for loop.
            //for even length palindrome substring
            left=i-1; right=i;
            while(left>=0 && right<n && s[left--]==s[right++]) count++;
        }
        
        //return no. of palindrome substrings
        return count;
    }
};

// TC: O(n*n)