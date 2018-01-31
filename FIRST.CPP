  #include<iostream.h>
  #include<conio.h>
  void main()
    {
	       int arr[5];
	       int small,big;
	       clrscr();
	       for(int i=0;i<5;i++)
	       {
	       cout<<"\n\t Enter value:"<<i<<endl;
	       cin>>arr[i];
	       }
	       big=small=arr[0];

	       for(int j=0;j<5;j++)
	       {
		if(arr[j]>big)
		{
		big=arr[j];
		}
		if(arr[j]<small)
		{
		small=arr[j];
		}
	       }
	       cout<<"\n\t The  largest number is::" <<big<<endl;
	       cout<<"\n\t The  smallest number is::" <<small<<endl;

	       getch();
	       }