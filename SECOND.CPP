#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
   int ch;
   clrscr();
   cout<<"\n\t Enter choice:"<<endl;
   cin>>ch;
  switch(ch)
  {
    case 1:
       char str[10];
       cout<<"\n\t Enter first string:"<<endl;
       cin>>str;
       cout<<"\n\t String length is:" <<strlen(str)<<endl;
       break;
    case 2:
       char str1[10] ,str2[10];
       cout<<"\n\t Enter first string:"<<endl;
       cin>>str1;
       cout<<"\n\t Enter second string:"<<endl;
       cin>>str2;
       if(strcmp(str1,str2)==0)
	 {
	  cout<<"\n\t Both the Strings are equal"<<endl;
	 }
       else
	 {
	  cout<<"\n\t Both the Strings are not equal"<<endl;
	 }
     break;
    case 3:
	 char str3[10] ,str4[10];
	 cout<<"\n\t Enter first string:"<<endl;
	 cin>>str3;
	 cout<<"\n\t Enter second string:"<<endl;
	 cin>>str4;
	 strcat(str3,str4);
	 cout<<"\n\t String after concatenate is:" <<str3;
    break;
    case 4:
	char str5[10];
	cout<<"\n\t Enter first string:"<<endl;
	cin>>str5;
	cout<<"\n\t String reverse is:" <<strrev(str5);
    break;
    case 5:
	char str6[10];
	int i;
	cout<<"\n\t Enter Uppercase string:"<<endl;
	cin>>str6;
	for(i=0;i<=strlen(str6);i++)
	 {
	   if(str6[i]>=65 && str6[i]<=92)
	   {
	    str6[i]=str6[i]+32;
	   }
	 }
	cout<<"\n\t The Lowercase String is:" <<str6;
      break;
     default:
	cout<<"\n\t enter any string::" <<endl;
    }
  getch();
  }