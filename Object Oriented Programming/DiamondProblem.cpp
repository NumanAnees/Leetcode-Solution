//solved by virtual inheritence....
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
        
};

class Tiger : virtual public Animal{
    public: 
        Tiger(){
            cout<<"Tiger constructor called"<<endl;
        }
        
};
class Lion : virtual public Animal{
    public: 
        Lion(){
            cout<<"Lion constructor called"<<endl;
        }
       
       
};

class Liger : public Tiger,public Lion{
    public: 
        Liger(){
            cout<<"Liger constructor called"<<endl;
        }
        
      
};



int main(){
    Liger a;
    a.intro();
    
    return 0;
}