class Solution {
public:
    int passThePillow(int n, int time) {
        bool LeftToRight=false;
        int curr=1;
        while(time>0){
            if(curr==n || curr==1) LeftToRight=!LeftToRight;
            if(LeftToRight){
                if(curr<=n){
                curr++;
                time--;
                }else{
                    break;
                }
            }else{
                if(curr>0){
                    curr--;
                    time--;
                }else{
                    break;
                }
            }
        }
        return curr;
    }
};