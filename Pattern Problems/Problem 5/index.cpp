class Solution{
public:
	
	void printTriangle(int n) {
        //outer loop
        for(int j=0;j<n;j++){
            //inner loop
             for(int i=n;i>0+j;i--)
             {
                 cout<<"* ";
              } 
          cout<<endl;
        }
	}
};


# Problem

* * * * *
* * * * 
* * * 
* *  
* 