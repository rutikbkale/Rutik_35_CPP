// Write a Program on read & write the context of file text file.

#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    int age;

    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your age : ";
    cin>>age;

    ofstream ofs;
    ofs.open("std.txt",ios::trunc);
    ofs<<name<<endl;
    ofs<<age;
    //cout<<"Age is : "<<age;
    ofs.close();

    ifstream ifs;
    ifs.open("std.txt");
    string name1 ;
    int age1 ;
    getline(ifs,name1);
    ifs>>age1;
    cout<<"Name is : "<<name1<<endl;
    cout<<"Age is : "<<age1;
    ifs.close();

    return 0;
}
