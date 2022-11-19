class StockSpanner {
public:
   stack<pair<int,int>> s;
    StockSpanner() {        
    }
    
    int next(int price) {
       int res = 1;
         while(s.size() && s.top().first<=price){
             res+= s.top().second;
             s.pop(); //pop is very important because we already incremented the count so no need to check again....in short res+top().second will add 2 in this case...it is not a ++ but a res+prev.......
             //reference: https://www.youtube.com/watch?v=slYh0ZNEqSw
         }
       s.push({price,res});
       return res;
    }
};
