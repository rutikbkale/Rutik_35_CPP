#include<iostream.h>
#include<conio.h>
class Test
{
public:
Test()
{cout<<"Constructor executed"<<endl;
}
~Test()
{
cout<<"Destructor executed";
}}
;
int main()
{
 clrscr();
 Test t;
getch();
return 0;
}