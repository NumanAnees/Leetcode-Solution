//------------------------------------constructor flow-----------------------------------------
#include <bits/stdc++.h>
using namespace std;

class Animal{
    public: 
        Animal(){
            cout<<"Animal constructor called"<<endl;
        }
        void intro(){
            cout<<"Hello from the Animal"<<endl;
        }
        ~ Animal(){
            cout<<"Animal destructor called"<<endl;
        }
};

class Tiger : public Animal{
    public: 
        Tiger(){
            cout<<"Tiger constructor called"<<endl;
        }
        void intro(){
            cout<<"Hello from the Tiger"<<endl;
        }
        ~ Tiger(){
            cout<<"Tiger destructor called"<<endl;
        }
};

class babyTiger : public Tiger{
    public: 
        babyTiger(){
            cout<<"babyTiger constructor called"<<endl;
        }
        void intro(){
            cout<<"Hello from the babyTiger"<<endl;
        }
        ~ babyTiger(){
            cout<<"babyTiger destructor called"<<endl;
        }
};



int main(){
    Animal a;
    a.intro();
    
    return 0;
}
//Flow is 
// parent 's parent
// parent
// child