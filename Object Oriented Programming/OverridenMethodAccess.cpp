#include <iostream>

using namespace std;

class Person{
public:
    void introduce(){
    cout << "hi i am a person"<<endl;
    }

};

class Student : public Person{
public:
    void introduce(){
    cout << "hi i am a student and i am awesome"<<endl;
    Person::introduce();
    }

};

int main()
{   
    //call person
    Person *numan=new Student();
    numan->introduce();
    
    //error
    // Student *numan = new Person();
    // numan->introduce();
    return 0;
}

 