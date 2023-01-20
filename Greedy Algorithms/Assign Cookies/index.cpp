class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
		// g for children , s for cookie
        int len_g = g.size();
        int len_s = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = 0,j = 0,count = 0;
        while(i < len_g && j < len_s){
            if (s[j] >= g[i]){ // we alway want s[i] < g[j] , and if ( s[j] >= g[i] ) we get a answer,so we can get next element (cookie) by doing i++.
                count++;
                i++; //only increase when find the cookie for that child...
            }
            j++; //increase always....
        }
        return count;
    }
};