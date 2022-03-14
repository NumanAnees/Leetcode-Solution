class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        //all values initialize with 0
        int arr[26] = {0};
        
        //create array of count of characters
        for(int i =0;i<str.length();i++){
            char  ch = str[i];
            int number = ch-'a';
            arr[number]++;
        }
        //find max occuring character
        int maxi = -1,ans=0;
        for(int i=0;i<26;i++){
            if(maxi<arr[i])
            {
                ans = i;
                maxi = arr[i];
            }
        }
            
            return ans+'a';

    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  