#include<iostream.h>
#include<conio.h>
class budget
{
   public:
    float income,tax;
    public:
    void show(float a, float b);
    void display();
    void calculate();
};
void budget:: show(float a, float b)
{
income=a;
tax=b;
}
void budget::display()
{
 cout<<"\n Income="<<income;
 cout<<"\n tax="<<tax;
 }
 void budget::calculate()
 {
 float result;
 result=(income*12*tax)/100;
 cout<<"\n Income tax to be paid="<<result;
 }
 void main()
 {
	clrscr();
	budget c;
	float a,b;
	cout<<"\n---------program for finding Income tax------"<<endl;
	cout<<"\n Enter income and tax rate:"<<endl;
	cin>>a>>b;
	c.show(a,b);
	c.display();
	c.calculate();
	getch();
 }