#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a=5,b=10,temp;
cout<<"Before swapping: "<<endl;
cout<<a<<b;
temp=a;
a=b;
b=temp;
cout<<"After swapping: ";
cout<<a<<b;
getch();
return 0;
}
