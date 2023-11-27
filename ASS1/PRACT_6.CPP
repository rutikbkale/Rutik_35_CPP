#include<iostream.h>
#include<conio.h>

 class person
{public:
 int employee_id,age;
  char name,address;
};
int main()
{
clrscr();
person p;
cout<<"Enter the person details: "<<endl;
cin>>p.employee_id;
cin>>p.name;
cin>>p.address;
cin>>p.age;
cout<<"Employee id is: "<<endl;
cout<<p.employee_id<<endl;
cout<<"Employee name is: "<<endl;
cout<<p.name<<endl;
cout<<"Employee address is: "<<endl;
cout<<p.address<<endl;
cout<<"Employee age is: ";
cout<<p.age;
getch();
return 0;
}
