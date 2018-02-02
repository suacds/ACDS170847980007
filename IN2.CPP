/*C++ program to demonstrate example of hierarchical inheritance 
to get square and cube of a number.*/

#include<iostream.h>
#include<conio.h>

class Number
{
    private:
	int num;
    public:
	void getNumber()
	{
	    cout << "Enter an integer number: ";
	    cin  >> num;
	}
	//to return num
	int returnNumber()
	{
	  return num;
	}
};

//Base Class 1, to calculate square of a number
class Square:public Number
{
    public:
    int getSquare()
    {
	int num,sqr;
	num=returnNumber(); //get number from class Number
	sqr=num*num;
	return sqr;
    }
};

//Base Class 2, to calculate cube of a number
class Cube:public Number
{
    private:

    public:
    int getCube()
    {
	int num,cube;
	num=returnNumber(); //get number from class Number
	cube=num*num*num;
	return cube;
    }
};
void main()
{
	Square objS;
	Cube objC;
	clrscr();
	int sqr,cube;

	objS.getNumber();
	sqr =objS.getSquare();
	cout << "Square of "<< objS.returnNumber() << " is: " << sqr  << endl;

	objC.getNumber();
	cube=objC.getCube();
	cout << "Cube   of "<< objS.returnNumber() << " is: " << cube << endl;
	getch();

}