#include<iostream.h>
#include<conio.h>

struct stud
{
   int roll;
   char name[50];
   float m,p,c;
};

typedef stud s;

void main()
{
  s student[10];
  clrscr();
  for(int i=0;i<10;i++)
    {
      cout<<"\n\t Enter Roll Number:" <<endl;
      cin>>student[i].roll;
      cout<<"\n\t Enter name:"<<endl;
      cin>>student[i].name;
      cout<<"\t Enter marks of three subjects:" <<endl;
      cin>>student[i].m>>student[i].p>>student[i].c;
     }
    cout<<"\n\t Students failed in more than 1 subject:" <<endl;
    for(i=0;i<10;i++)
    {
     if((student[i].m<40 && student[i].p<40) || (student[i].p<40 && student[i].c<40) ||(student[i].m<40 && student[i].c<40))
     cout<<student[i].roll<<"\t" <<student[i].name<<"\n";
     }
  getch();
}