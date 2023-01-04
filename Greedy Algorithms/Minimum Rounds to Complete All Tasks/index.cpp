class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int count = 0;
        unordered_map<int,int> umap;
        //store count in umap....
        for(int i=0;i<tasks.size();i++){
            umap[tasks[i]]++;
        }
        //check count....
        int num,freq;
        for (auto i : umap){
            freq = i.second;
            if(freq==1)
                return -1; //if 1 then return -1....
            if(freq%3==0){
                count += freq/3;
            }
            else{
                count += freq/3 + 1; // 1 extra bcoz 3,3,3=>1? we covert 3,3,2,2=0....
            }
        }
        return count;
    }
};