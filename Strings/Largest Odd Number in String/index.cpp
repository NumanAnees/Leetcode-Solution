//----------------------------------- Simple Approach space 0(1) -------------------------------------- 
class Solution {
public:
   string largestOddNumber(string num) {
    //nums.length()-> 5 in case "23233" gives the total number so, 0 is imp............
	for(int i=num.size()-1;i>=0;i--){ 
		if(num[i]%2==0) num.pop_back();
		else break;
	}
	return num;
}
};


//----------------------------------- My Approach not working for large input string--------------------

class Solution {
public:
    string largestOddNumber(string nums) {
        string output="";
        //nums.length()-> 5 in case "23233" gives the total number so, 0 is imp............
        for(char i = nums.length()-1; i>=0;i--){
            if(nums[i]%2==1){
                if(output=="") output = nums[i];
                else output = nums[i] + output;
            }
            else if(output!=""){
                output = nums[i] + output;
            }
        }
        cout<<nums.length();
        return output;
    }
};