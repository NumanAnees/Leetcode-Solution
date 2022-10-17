class Solution {
  public:
    void printTriangle(int n) {
        //outer loop
        for(int j=1;j<=n;j++){
            //inner loop
             for(int i=1;i<=j;i++)
             {
                 cout<<i<<" ";
              } 
          cout<<endl;
        }    }
};

# Problem
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5