#include<iostream.h>
#include<conio.h>
class Bike
{
public:
 Bike()
{
cout<<"This is Bike"<<endl;
 }};
 class Motorbike:public Bike
 {
 public:
   Motorbike()
 {
 cout<<"This is Motorbike"<<endl;
 }};
 class car:public Motorbike
 {
 public:
 car()
 {
 cout<<"This is car";
 }};
 int main()
 {
 car obj;
 getch();
 return 0;
 }
