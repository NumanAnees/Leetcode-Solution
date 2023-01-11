#include <iostream>
#include <string>
using namespace std;

class Person{
public:
string *name;
int age;

    Person(string name,int age){
    this->name = new string(name);
    this->age = age;
    }

    Person(const Person &p){
    cout << "copy constructor is called "<<endl;
    name = new string(*p.name);
    age = p.age;
    }

    void changeNameandAge(string name,int age){
    *(this->name) = name;
    this->age = age;
    }

    void introduce(){
    cout << "hey i am "<<*name<<" and i am "<<age<<" years old"<<endl;
    }
};

int main()
{
    Person nomi("nomi",24);
    nomi.introduce();

    Person duplicatenomi = nomi;
    duplicatenomi.introduce();

    nomi.changeNameandAge("nomi shetty",100);
    nomi.introduce();
    duplicatenomi.introduce();
    return 0;
}

 