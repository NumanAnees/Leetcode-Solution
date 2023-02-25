// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1); //factorial mannnnnnnn
}
bool isStrong(int n){
    int num=n;
    int rem;
    int sum=0;
    while(num>0){
        rem=num%10;
        num=num/10;
        sum=sum+factorial(rem);
    }
    return sum==n;
}

int main() {
   
   int n=145;
   bool ans=isStrong(n);
   cout<<ans;
    return 0;
}