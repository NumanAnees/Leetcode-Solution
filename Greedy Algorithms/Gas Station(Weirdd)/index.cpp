class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //if sum(gas)<sum(cost) then it is imposible...
        int gasSum=0;
        int costSum=0;
        for(auto g:gas){
            gasSum+=g;
        }
        for(auto c:cost){
            costSum+=c;
        }
        if(gasSum<costSum) return -1;//no answer exist...
        //answer exists...
        int Total=0;
        int ans=0;//ans index 0 initially....
        for(int i=0;i<gas.size();i++){
            Total+=(gas[i]-cost[i]);//4-1==+3
            if(Total<0){
                Total=0;
                ans=i+1; //atleast for 1 position algo is correct(1 unique ans exist)
            } 
        }
        return ans;
    }
};