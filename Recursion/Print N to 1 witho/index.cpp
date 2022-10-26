class Solution {
  public:
    void printNos(int N)
    {
        if(N==1){
        //cout<<1;
        cout<<1<<" ";
        return;//return required....
        }
        //N to 1 so print before calling the function for N-1....
        cout<<N<<" ";
        printNos(N-1);
        //no return bacause void;;;
    }
};