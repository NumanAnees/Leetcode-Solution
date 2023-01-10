#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    string name;

    class Address{
    public:
        string country;
        string stname;
        int hno;

    };

    Address addr;
    void AddressPlease(){
    cout<< name <<endl << addr.country <<endl <<addr.stname << endl <<addr.hno <<endl;
    }
};


int main()
{
    Person :: Address ad; //cannot create obj directly bcoz out of scope.... 
    Person numan;
    numan.name = "numan";
    numan.addr.country = "pakistan";
    numan.addr.stname = "lahore";
    numan.addr.hno = 68;

    numan.AddressPlease();
    return 0;
}

 