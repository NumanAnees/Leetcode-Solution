#include <iostream>

using namespace std;

class Person{
public:
    virtual void introduce(){
    cout <<"hey from person"<<endl;
    }
};

class Student : public Person{
public:
    void introduce(){
    cout <<"hey from student"<<endl;
    }
};

class Farmer : public Person{
public:
    // void introduce(){
    // cout <<"hey from Farmer"<<endl;
    // }
};

void whosThis(Person &p){//polymorphism means that a call to a member func will cause different function
//to be executed depending upon the type of object passed....
p.introduce();
}

int main()
{
    
    Farmer numan;
    Student alex;

    whosThis(numan);
    whosThis(alex);
    return 0;
}

 