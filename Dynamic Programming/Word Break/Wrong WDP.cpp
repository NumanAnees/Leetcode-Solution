//--------------------------------------Passing 25/49 test cases--------------------------------
//false for case 
//"catsandog" ["cats","dog","sand","and","cat"] ans should be false.
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto x : wordDict){
            if(s.find(x)==s.length()){
                return false;
            }
        }
        return true;   
    }
};

//-------------------------------------- erase string also-----------------------------
class Solution {
public:
    bool wordBreak(string &s, vector<string>& wordDict) {
        for(auto x : wordDict){
            int loc = s.find(x);
            if(loc>=s.length() || loc==-1){
                return false;
            }else{
                // cout<<x<<" : "<<s<<endl;
                //erase so it can not be used again....
                s.erase(loc,x.length());
            }
        }
        return true;   
    }
};