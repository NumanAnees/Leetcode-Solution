//------------------------------------constructor flow-----------------------------------------
#include <bits/stdc++.h>
using namespace std;
//Unlike Java, C++ supports multiple inheritance (for better or worse), so the base class must be referred to by name, rather than "super()".
class Animal{
    public: 
        Animal(int a){
            cout<<"Animal constructor called : "<<a<<endl;
        }
};

class Tiger : public Animal{
    public: 
        Tiger():Animal(10){ //this is how
            cout<<"Tiger constructor called"<<endl;
        }
};


int main(){
    Tiger a;    
    return 0;
}
