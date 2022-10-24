
//-------------------------My better approach with sting and string.push_back()-----------------------

class Solution {
public:
    int reverse(int x) {
        string ans="";
        int temp = x;
        if(temp<0){
            temp = temp * (-1);
        }
        while(temp!=0){
            int remainder = temp%10;
            temp = temp/10;
            //last digit first allways for 123 the first remainder will be 3....    
            ans.push_back(remainder);
        }
        int integerAns = stoi(ans);
        if(x<0){
            integerAns = integerAns*(-1);
        }
       return integerAns;
    }
};

//-----------------------My Aproach but integer overflow can solved by using long long int----------------------

class Solution {
public:
    int reverse(int x) {
       long long int ans=0;
       long long int temp = x;
        //remove (-) sign
        if(temp<0){
            temp = temp * (-1);
        }
        int counter=10;
        while(temp!=0){
            int remainder = temp%10;
            temp = temp/10;
            if(ans==0)
            {
                ans=remainder;
            }
            else if(ans>0){ 
                //32*10+1 is 321
                ans = ans*counter+remainder;
            }
            //we want 321 not 123 so, 32*10 is 3200 while reminder allways have 1 digit.....
            //counter= counter+10;
        }
        //add (-) sign
        if(x<0){
            ans = ans*(-1);
        }
       
       return ans;
    }
};

//---------------------------------------Code with all test cases passed--------------------------------
// We will go beyond the question rule by storing our reverse ans as long long int;
// Then we check if the reverse value is following the INT_MAX or INT_MIN condition or not
// Lastly we will return the value ans a int type;
class Solution {
public:
    int reverse(int n) {
        
        long long reverse=0;  // it will make our working process super easy
        
        while(n!=0)
        {
            int temp = n%10;
            reverse = reverse*10+temp;
            if(reverse>=INT_MAX || reverse<=INT_MIN) //checkint if the reverse value is following the INT_MAX or INT_MIN condition or not
			{ 
                return 0;
            }
            n/=10;
        }
        
        int ans=reverse;
        return ans;
    }
};