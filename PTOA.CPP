#include<iostream.h>
#include<conio.h>


int main()
{
    clrscr();
    float arr[5];
    float *ptr;

     cout<< "Displaying address using arrays: " << endl;
    for (int i = 0; i < 5; ++i)
    {
	cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;
    for (int j = 0; j < 5; ++j)
    {
	cout << "ptr + " << j << " = "<< ptr + j << endl;
    }
    getch();
    return 0;

}