#include <iostream>
#include <string>

using namespace std;

class Person{
protected:
    string name;
public:
    void setName(string iname){
    name = iname;
    }
    void hello(){
        cout<<"hello"<<endl;
    }
};

class Student : private Person{
public:

   using Person :: name; //redeclare public scope
   using Person :: setName; //redeclare public scope

    void display(){
    cout <<"Name is : "<<name<<endl;
     hello(); //can call directly
    }

};


int main()
{
    Student numan;
    numan.setName("Numan");
    numan.display();
    numan.hello();//give error...
    return 0;
}

 