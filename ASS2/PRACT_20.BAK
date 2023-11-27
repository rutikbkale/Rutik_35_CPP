#include<iostream.h>
#include<conio.h>
class shape
{
protected:
float dim;
public:
void getdim()
{
cin>>dim;
}
virtual float calarea()=0;
};
class square:public shape
{
public:
float calarea()
{
return dim*dim;
}};
class circle:public shape
{
public:
float calarea()
{
return 3.14*dim*dim;
}};
int main()
{
square s;
circle c;
clrscr();
cout<<"Enter length: ";
s.getdim();
cout<<"Area of square: "<<s.calarea();
cout<<"Enter radius: ";
c.getdim();
cout<<"Area of circle: "<<c.calarea();
getch();
return 0;
}