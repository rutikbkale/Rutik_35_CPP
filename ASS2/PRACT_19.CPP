
#include<iostream.h>
#include<conio.h>
class A
{
private:
A(int a, int b)
{
cout<<"Addition of a and b: "<<a+b<<endl;
}
friend void display();
};
void display()
{
A z(6,7);
cout<<"Friend function ";

}
int main()
{

 display();
 getch();
 return 0;
 }