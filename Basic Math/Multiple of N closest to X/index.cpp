class Solution{
	public:
   	int closestNo(int x, int n){
   	   int num=n;
   	   int prevNum=n;
   	   while(num<=x){
   	       prevNum=num;
   	       num = num+n;
   	   }
   	   int diff1=x-prevNum;
   	   int diff2=num-x;
   	   if(diff1<diff2) return prevNum;
   	   else return num; //return where difference is smaller.
   	}    
};