#include<iostream.h>
#include<conio.h>


struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    clrscr();
    cout << "Enter information of students: " << endl;

    // storing information
    for(int i = 0; i < 4; ++i)
    {
	s[i].roll = i+1;
	cout << "For roll number" << s[i].roll << "," << endl;

	cout << "Enter name: ";
	cin >> s[i].name;

	cout << "Enter marks: ";
	cin >> s[i].marks;

	cout << endl;
    }

    cout << "Displaying Information: " << endl;

    // Displaying information
    for(int j = 0; j < 4; ++j)
    {
	cout << "\nRoll number: " << j+1 << endl;
	cout << "Name: " << s[j].name << endl;
	cout << "Marks: " << s[j].marks << endl;
    }
    getch();
    return 0;
}
