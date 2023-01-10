#include <iostream>

using namespace std;

class Person{
public:
   virtual void introduce(){
    cout <<"hi from person"<<endl;
    }
};

class Student : public Person{
public:
    void introduce(){
    cout <<"hi from Student"<<endl;
    }
};

class GStudent : public Student{
public:
    // void introduce(){
    // cout << "hi from graduated student"<<endl;;
    // }
    //now will call from parent not from grand parent...
};

void whoIsThis(Person &p){
p.introduce();
}
//virtual func and multilevel inheritence.....
int main()
{
    Person numan;
    Student anjali;
    GStudent rashmith;

    whoIsThis(numan);
    whoIsThis(anjali);
    whoIsThis(rashmith);
    return 0;
}

 