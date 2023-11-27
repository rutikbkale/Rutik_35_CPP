// Write a Program on serialization

#include <iostream>
#include<fstream>
#include<string>

using namespace std;

class Person{
    public:
        string name;
        int age;

        Person(){}

        Person(const string &n, int a) { 
            name = n;
            age = a;
        }
           
        void getSerialize(ofstream &ofs){
            ofs<<name<<endl;
            ofs<<age;
        }

        void getDeSerialize(ifstream &ifs){
            getline(ifs,name);
            ifs>>age;
        }
};

int main()
{
        Person obj1("Rutik Kale", 22);
        ofstream ofs("person.txt");
        obj1.getSerialize(ofs);
        ofs.close();

        Person obj2;
        ifstream ifs("person.txt");
        obj2.getDeSerialize(ifs);
        ifs.close();

        cout<<"Name is : "<<obj2.name<<endl;
        cout<<"Age is : "<<obj2.age;
    return 0;
}
