#include <iostream>

using namespace std;

class Person{
public:
   virtual void introduce()=0;

};

void Person :: introduce(){ //can declare outside class only
cout << "hey from person"<<endl;
}

class Student : public Person{
public:
    //gives error if not implement this in derived class....
   void introduce(){
    cout << "hi i am a student"<<endl;
    //Person ::introduce();
    }
};

int main()
{
Student anil;
anil.introduce();

//not giving error after using * and not any output...........
Person *p;
p->introduce();
    return 0;
}

 