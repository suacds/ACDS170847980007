#include<iostream.h>
#include<conio.h>

void swapvalue (int *a, int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;

}
 void main()
 {

  int a,b;
  clrscr();
  cout<<"\n\t Enter two numbers:";
  cin>>a>>b;

  //passing address...
   swapvalue(&a,&b);

   cout<<"After swapping first and second number is: " <<a<<" " <<b <<endl;
   getch();

  }