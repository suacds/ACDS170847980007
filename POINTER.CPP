
/*..Modify the solution of exercise 1 in order to print the
    elements of the array in reverse order using a pointer. */

#include<iostream.h>
#include<conio.h>

   int main()
    {
     clrscr();
     int arr[5],i;
     int *p=arr;
     cout<<"Enter five numbers separated by space:";
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout<<"Your numbers are:\n";
     for(i=4;i>=0;i--)
	cout<<*(p+i)<<endl;

     getch();
     return 0;

    }