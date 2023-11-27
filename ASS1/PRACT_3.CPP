#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c;
cout<<"Enterv a,b & c: "<<endl;
cin>>a;
cin>>b;
cin>>c;
switch(c)
{
case 1:
cout<<"Addition= "<<a+b;
break;
case 2:
cout<<"Subtraction= "<<a-b;
break;
case 3:
cout<<"Multiplication= "<<a*b;
break;

case 4:cout<<"Division= "<<a/b;
break;
default:
cout<<"Enter valid value of c";
break;
}
getch();
return 0;
}