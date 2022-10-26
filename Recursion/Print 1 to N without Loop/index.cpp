class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        if(N==1){
        //cout<<1;
        cout<<1<<" ";
        return;//return required....
        }
        
        printNos(N-1);
        cout<<N<<" ";
        //no return bacause void;;;
    }
};