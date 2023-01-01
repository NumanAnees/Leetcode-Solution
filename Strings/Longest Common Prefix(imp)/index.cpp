class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output="";
        //for traversing all characters of first String
        for(int i=0;i<strs[0].length();i++){
            char ch = strs[0][i];
            
            bool match = true;
            
        
            //for comparing bool with the rest of strings...
            for(int j = 1;j<strs.size();j++){
                //not match or j string is small in length than i string...
                //[j][i] not [i][j]..... :)
                if(strs[j].size()<i || ch !=strs[j][i] ){
                    match=false;
                    break;
                }
                
            }
            if(match==false){
                 break;
            }
            else{
                output.push_back(ch);    
            }
        }
        return output;
    }
};
//complexity is 0(n*m)...
//------------Solution using Trie????----------------------