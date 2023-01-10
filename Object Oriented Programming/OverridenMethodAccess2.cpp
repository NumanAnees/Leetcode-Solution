#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    int age;
    string any;
    void introduce(){
    cout <<"hey from person"<<endl;
    }
};

class Student : public Person{
public:
    string color;
    int size;
    void introduce(){
    cout <<"hey from student"<<endl;
    }
};

void whosThis(Person &p){
p.introduce(); //call person
}

int main()
{
    Student anil;
    anil.introduce();
    whosThis(anil);

    //check base vs derived size
    Person a;
    Student b;
    cout<<"Person : "<<sizeof(a)<<endl; //40
    cout<<"Student : "<<sizeof(b)<<endl; //80
    return 0;
}

 