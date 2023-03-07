bool comparator(string a, string b){
    return a+b>b+a;
} //----outside of class------
class Solution {
private:
public:
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
        //handle "000"->"0" case here
        int zeros = 0;
        for(int c:nums){
            if(c==0) zeros++;
        }
        if(zeros==nums.size()) return "0"; //index size()-1 but elements size()
        //push in array of string....
        for(auto c:nums){
            string ch = to_string(c);
            ans.push_back(ch); //range is from 0 to n ....non negative...
        }
        //now just sort array ans and make a string to return...
        sort(ans.begin(),ans.end(),comparator); //sort by comparing "3"+"60" > "60"+"3"...
        string out="";
        for(auto x:ans){
            out+=x;
        }
        
        return out; //important step....
    }
};