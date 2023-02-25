// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int n) {
        if(n==0) return 1;
        int prev1=1;//base case for 0
        for(int i=1;i<=n;i++){
            int curr=prev1*i;
            prev1=curr;
        }
        return prev1;
    }
    
    
int main() {
    // Write C++ code here
    cout<<factorial(7);
    return 0;
}