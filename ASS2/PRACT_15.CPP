#include<iostream.h>
#include<conio.h>
class unary{
public:
int hr,min;
void in(){
cout<<"Enter hrs & mins: "<<endl;
cin>>hr>>min;
}
void operator++(int)
{
hr++;
min++;}
void operator--(int)
{
hr--;
min--;
}
void out()
{
cout<<"Time is "<<hr<<"hr "<<min<<"mins"<<endl;
}};
int main()
{
unary a;
a.in();
a++;
cout<<"After increment: "<<endl;
a.out();
a--;
a--;
cout<<"After decrementing: ";
a.out();
getch();
return 0;
}