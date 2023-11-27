#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int row,m,p,n;
cout<<"Enter number of rows: ";
cin>>row;
for(m=1;m<=row;m++)
{
for(p=row;p>m;p--)
{
cout<<" ";
}
for(n=0;n<m;n++)
{
cout<<"*";}
cout<<endl;
cout<<endl;
}

getch();
return 0;
}
