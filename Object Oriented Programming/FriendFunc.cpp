#include <iostream>
#include<string>

using namespace std;

class Human{
string name;
int age;

public:
    Human(string iname,int iage){
    name = iname;
    age = iage;
    }
    void tellme(){
    cout <<name<<endl<<age<<endl;
    }
 friend void display(Human man);
 friend void hello();
};

//what if 2 classes have same friend func?

class Animal{
string name;
int age;

public:
    Animal(string iname,int iage){
    name = iname;
    age = iage;
    }
    void tellme(){
    cout <<name<<endl<<age<<endl;
    }
 friend void display(Animal man);
  friend void hello();


};

//gives error.....
// void display(auto idk){
// cout<<"Hello from human with "<<idk.name<<endl<<idk.age<<endl;
// }

void display(Human man){
cout<<"Hello from human with "<<man.name<<endl<<man.age<<endl;
}

void display(Animal animal){
cout<<"Hello from Animal with "<<animal.name<<endl<<animal.age<<endl;

}

void hello(){
    cout<<"Hellooo......"<<endl;
}

int main()
{
    Human numan("Numan",21);
    //display(numan);
    numan.hello(); //gives error so ff only called by func(obj).
    
    Animal lion("lion",4);
    //display(lion);
    return 0;
}

 