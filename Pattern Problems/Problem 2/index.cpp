class Solution {
  public:
    void printTriangle(int n) {
        //outer loop
        for(int j=0;j<n;j++){
            //inner loop
             for(int i=0;i<=j;i++)
             {
                 cout<<"* ";
              } 
          cout<<endl;
        }
    }
};