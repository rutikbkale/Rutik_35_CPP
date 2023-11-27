#include<iostream.h>
#include<conio.h>
class Base
{
public:
virtual void print()
{
cout<<"Base function"<<endl;
}};
class Derived:public Base
{
public  :
void print()
{
cout<<"Derived function";
}};
int main()
{
clrscr();
Derived d;
Base *Base1=&d;
Base1->print();
getch();
return 0;
}