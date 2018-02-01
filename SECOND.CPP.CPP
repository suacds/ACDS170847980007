#include<iostream.h>
#include<conio.h>
class complex
{
  public:
  int real,img;
 };
 void main ()
 {

  int ch;
  complex a,b,c;
  clrscr();  

  cout<<"\n Enter your choice:"<<endl;
  cin>>ch;
  cout<<"Enter a&b where a+ib is the first complex number.";
  cout<<"\na =";
  cin>>a.real;
  cout<<"b =" ;
  cin>>a.img;
  cout<<"Enter c and d where c+id is the second complex number.";
  cout<<"\nc =";
  cin>>b.real;
  cout<<"d =" ;
  cin>>b.img;
  switch(ch)
  {
    case 1:
	 c.real=a.real+b.real;
	 c.img=a.img+b.img;
	 if(c.img>=0)
	 cout<<"Sum of two complex numbers="<<c.real<<"+"<<c.img  
       <<"i" <<endl;
	 else
	  cout<<"Sum of two complex numbers="<<c.real<<" "<<c.img 
        <<"i" <<endl;
	  break;

	  case 2:
	 c.real=a.real-b.real;
	 c.img=a.img-b.img;
	 if(c.img>=0)
	 cout<<"Subtract of two complex numbers="<<c.real
       <<"-"<<c.img<<"i" <<endl;
	 else
	  cout<<"Subtract of two complex numbers="<<c.real<<" 
       "<<c.img<<"i" <<endl;
	  break;

	 case 3:
	 c.real=a.real*b.real;
	 c.img=a.img*b.img;
	 if(c.img>=0)
	 cout<<"Multiply of two complex numbers="<<c.real
       <<"*"<<c.img<<"i" <<endl;
	 else
	  cout<<"Multiply of two complex numbers="<<c.real<<" 
        "<<c.img<<"i" <<endl;
	  break;
	  case 4:
	 c.real=a.real/b.real;
	 c.img=a.img/b.img;
	 if(c.img>=0)
	 cout<<"Divide of two complex numbers="<<c.real<<"/"<<c.img
       <<"i" <<endl;
	 else
	  cout<<"Divide of two complex numbers="<<c.real<<" "<<c.img
       <<"i" <<endl;
	  break;

	  default:
	  cout<<"\n\t  Error!"<<endl;
  }

  getch();
  }