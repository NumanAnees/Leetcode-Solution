class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res; 
        for(int i=1;i<=n;i++)
        {
           int three_sub = i % 3;
           int five_sub = i % 5;
            if(three_sub == 0 && five_sub == 0)
            {
                res.push_back("FizzBuzz");
            }
            else if(three_sub==0){
                res.push_back("Fizz");
            } else if(five_sub==0){
                res.push_back("Buzz");
            }
            else{
              string st = to_string(i);
                res.push_back(st);
            }
            
        }
        return res;
    }
};