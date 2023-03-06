#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}

int main() {
    
    int a,b;
    cout << "Enter the Values of a and b" << endl;
    cin >> a >> b;

    int ans = gcd(a,b);

    cout << " The GCD of " << a << " & " << b << " is: " << ans << endl;



    return 0;
}


https://leetcode.com/contest/weekly-contest-335/problems/split-the-array-to-make-coprime-products/


class Solution {
private:
    int gcd( int a,int b) {
    if(a==0)
    return b;

    if(b==0)
    return a;

    while(a != b) {

        if(a>b)
        {
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}
public:
    int findValidSplit(vector<int>& nums) {
         int ans=0;        
         vector<unsigned long long int> prefix;
         vector<unsigned long long int > postfix;
        //----------------Prefix----------------------
        unsigned long long int prefixNo=1;
        for(int i=0;i<=nums.size()-2;i++){
            if(i==0){
                prefixNo=prefixNo*nums[i];
                prefix.push_back(prefixNo);
            }
            else{
                prefixNo=prefixNo*nums[i];//want prev value(prefix)....
                prefix.push_back(prefixNo);
            }
        }
        //----------------Postfix----------------------
        unsigned long long int postfixNo=1;
        for(int i=nums.size()-1;i>0;i--){ //very important array size 4 but indexes 3...
            if(i==nums.size()-1){
                postfixNo=postfixNo*nums[i];
                postfix.push_back(postfixNo);
            }
            else{
                postfixNo=postfixNo*nums[i];//want n+1 value(postfix)....
                 postfix.push_back(postfixNo);
            }
        }
        //reverse the array....
        reverse(postfix.begin(),postfix.end());
        //now ans part-----
        for(int i=0;i<prefix.size();i++){ //both size same...
            if(gcd(prefix[i],postfix[i])==1){
                ans=i;
                cout<<i<<endl;
                break; //only want 1st....
            }
        }
        if(ans==0) return -1;
        else return ans;
        
    }
};