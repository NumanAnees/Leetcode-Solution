//-----------------------------------------With 1 inner loop----------------------------------
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        //outer loop
        for(int i=1;i<=n; i++){
        //inner loop
        for(int j=0; j<n+(n-1);j++){
            if (j < (n-i)) cout << " ";
            else if (j >= n+i-1 )cout << " ";
            else cout << "*";
        }
        cout<< endl;
    }
    }
};
//-----------------------------------------With 2 inner loops----------------------------------
void printTriangle(int n) {

        // code here

        for(int i=1; i<=n; i++){

            for(int j=n-i;j>0; j--)

                cout<<" ";

            for(int k=1; k<=2*i-1; k++)

                cout<<"*";

        cout<<endl;

        }

    }


// ------------------------------------------Problem---------------------------------------------
/*


    *
   ***  
  *****
 *******
*********


*/
