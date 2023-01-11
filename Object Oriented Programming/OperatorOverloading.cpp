#include <iostream>

using namespace std;

class Marks{
int intmark;
int extmark;
public:
    Marks(){
    intmark = 0;
    extmark = 0;
    }
   Marks( int im,int em){
    intmark =im;
    extmark = em;
    }
    void display(){
    cout << intmark<<endl<<extmark<<endl;
    }

    Marks operator+(Marks m){
        Marks temp; //return 3rd new obj....
        temp.intmark = intmark + m.intmark;  //1st parameter(m1) will be automatically passed as a curr obj.
        temp.extmark = extmark + m.extmark; //so this intmark and extmark is of m1.intmark/extmark.... 
        return temp;

    }


};

int main()
{
   Marks m1(10,20),m2(30,40);

   Marks m3 = m1 + m2;
   m3.display();

    return 0;
}