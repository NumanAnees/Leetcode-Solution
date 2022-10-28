//----------------------------------My Approach with less complexity----------------------------------
class Solution {
public:
    bool rotateString(string s, string goal) {
        //right shifttt.....
        int n = s.length();
        char firstTarget = s[n-2];
        //second index is imp because what if string has more than 1 same characters and string is left shifted....
        char secondTarget = s[n-1];
        int TargetIndex=0;
        for(int i=0;i<goal.length();i++){
            if(goal[i]==firstTarget && goal[i+1]==secondTarget){
                TargetIndex = i+1;
            }
        }
        int k = s.length()-TargetIndex-1;
        //rotate to right....
        for(int i=0;i<k;i++)
        {
            int end = goal.size()-1;
            int endP = goal.size()-2;
            while(endP>=0)
            {
                swap(goal[end],goal[endP]);
                end--;
                endP--;
            }
        }
        if(goal==s){
            return 1;
        }
        else{
            return 0;
        }
    }
};
//--------------------------------------------Easy solution but string.find-------------------------------
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()>goal.size())
            return false;
			
		string temp="";
        temp=s+s;                  //combine the same string
        int i=temp.find(goal);    //to store index
        if(i>=0)
            return true;
        else
            return false;
    }
};