#include <iostream>

using namespace std;

class Human{
public:
    static int human_count;
    int test=10;
    string s="world";

    Human(){
    human_count++;
    }

    void humanTotal(){
    cout << "There are "<<human_count<<" peoples are in this program" <<endl;
    }

    static void humanCount(Human h){
        h.test = 11;
     cout << "There are "<<h.test<<" peoples are in this program " <<endl;
    }
    void display(){
        cout<<"Hello "<<s<<endl;
    }
};

int Human::human_count = 0; //only here....

int main()
{


cout << Human::human_count<<endl;

Human anil;
Human anjali;
Human rashith;
Human sandeep;
Human ::humanCount(sandeep); //static member
cout << Human::human_count<<endl; //static method

Human Numan;
Numan.display();

    return 0;
}


 