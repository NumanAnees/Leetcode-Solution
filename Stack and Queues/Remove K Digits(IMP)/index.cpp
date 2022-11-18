//--------------------------------------------Simple code-----------------------------------------
class Solution {
public: 
    string removeKdigits(string num, int k) {
        string ans="";
        for(int i=0;i<num.length();i++){
            while(k && ans.size() && num[i]<ans.back()){
                k--;
                ans.pop_back();
            }
            //if num[i]==0 no push...
            if(ans.size() || num[i]!='0'){
                ans.push_back(num[i]);
            }
        }
        //check if still k!=0.... input:9 
        while(k && ans.size()){
            ans.pop_back();
            k--;
        }
        return (ans=="")?"0":ans;
    }
};
//----------------------------------------complex code but Same approach-----------------------------------
class Solution {
public: 
    string removeKdigits(string num, int k) {
        string ans="";
        for(char &c:num)
        {
            //.back() refers to last character of string...
            while(ans.size() && ans.back()>c &&k)
            {
                ans.pop_back();
                k--;
            }
            if(ans.size()||c!='0')ans.push_back(c);
        }
        while(ans.size()&&k--) // <-------this look is to make sure we fulfil the deletion condition
        {
            ans.pop_back();
        }
        return (ans=="")?"0":ans;
    }
};
