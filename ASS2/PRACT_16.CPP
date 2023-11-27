	  #include<iostream.h>

        #include<conio.h>
	  class Time
	  {
	  int hr,min;
	  public:
	  void in()
	  {
	  cin>>hr;
	  cin>>min;
	  }
	  Time operator+(const Time &obj)
	  {
	  Time temp;
	  temp.hr=hr+obj.hr;
	  temp.min=min+obj.min;
	  if(temp.min>=60)
	  {
	  temp.hr+=1;
	  temp.min-=60;
	  }
	  if(temp.hr>24)

	  temp.hr=1;
	  return temp;
	  }
	  void out()
	  {
	  cout<<"Time is "<<hr<<"hrs"<<min<<"mins";
	}
	  };
	  int main()
	  {
	  Time T1,T2,result;
	  cout<<"Enter first time: ";
	  T1.in();
	  cout<<"Enter second time: ";
	   T2.in();
	   result=T1+T2;
	   result.out();
	   getch();
	   return 0;
	   }