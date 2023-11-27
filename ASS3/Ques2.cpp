//Write a Program for using exception handling concept.

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b;
    float div;

    cout<<"Enter two numbers : ";
    cin>>a>>b;

    try{
        if(b == 0){
            throw runtime_error("Denominator can't be zero !");
        }
        else{
            div = (float)(a/b);
            cout<<"Division is : "<<div;
        }
    }
    catch(runtime_error &e){
        cout<<e.what();
    }
    return 0;
}
