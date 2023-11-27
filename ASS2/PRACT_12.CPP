#include<iostream.h>
#include<conio.h>
class vehicle{
public:
vehicle()
{
cout<<"This is vehicle" <<endl;
}};
class fourwheeler{
public:
 void fourwheerler()
{
cout<<"fourwheeler";
}};
class car:public vehicle,public fourwheeler
{
public:
car()
{
cout<<"This is car";}};
int main()
{
car obj1;
getch();
return 0;
}