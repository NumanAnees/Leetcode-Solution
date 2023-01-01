#include <bits/stdc++.h>
using namespace std;

void func(int n){
    int ans = 101-n;
    cout<<"for value "<<n<<" : "<<ans+100<<endl;
}

int main(){
    func(100);
    func(101);
    return 0;
}