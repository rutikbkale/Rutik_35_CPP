#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int marks;
cout<<"Enter marks obtained= "<<endl;
cin>>marks;
if(marks<+20)
{
cout<<"Your are failed"<<endl;
}
else if(marks>=35)
{
cout<<"You are passed"<<endl;
}
else if(marks>=60)
{
cout<<"You are passed with distinction";
}
else
{
cout<<"please enter valid choice";
}
getch();
return 0;
}