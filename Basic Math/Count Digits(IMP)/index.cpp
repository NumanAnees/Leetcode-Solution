class Solution{
public:
    int evenlyDivides(int N){
        int num=0;
        int temp=N;
        while(temp!=0){
            int rem=temp%10;
            temp=temp/10;
            if(rem>0&&N%rem==0){
                num++;
            }
        }
return num;
    }
};
//-----Complexityy is 0(log N) not O(N)--------
//Dry-Run
//input 42
//iteration 1 rem = 2 and temp becomes 4
//iteration 2 rem = 4 and temp becomes 0 (4/10 is 0....something)