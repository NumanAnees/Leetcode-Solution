class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool ans=true;
        int fives=0;//5
        int tens=0; //10
        for(auto bill: bills){
            if(bill==5) fives++;
            else if(bill==10){
                if(fives>0){
                    fives--;
                    tens++;
                }
                else return false;
            }
            else if(bill==20){
                    if(tens>0 && fives>0){
                        fives--;
                        tens--;
                    }else if(fives>2){
                        fives=fives-3;
                    }else return false;
                }
            } 
        return ans;    
    }
};