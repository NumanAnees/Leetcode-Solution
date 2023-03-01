    public:
    string colName (long long int n)
    {
        // your code here
        string ans;
        while(n > 0) {
            n--; //index start from 1 not 0...
            int curr = n % 26;
            n = n / 26;
            ans.push_back(curr + 'A');
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};