/* Multiple inheritance using employee details example in c++     
   programming language.*/

 #include<iostream.h>
 #include<conio.h>>
 #include<stdio.h>
//Base Class - basicInfo

 class basicInfo
  {
    protected:
	char    name[30];
	int     empId;
	char    gender;
     public:
	void getBasicInfo(void)
	{
	    cout << "Enter Name: ";
	    cin>>name;
	    cout << "Enter Emp. Id: ";
	    cin  >> empId;
	    cout << "Enter Gender: ";
	    cin  >> gender;
	}
  };

//Base Class - deptInfo
class deptInfo
{
    protected:
	char    deptName[30];
	char    assignedWork[30];
	int     time2complete;
    public:
	void getDeptInfo(void)
	{
	    cout << "Enter Department Name: ";
	    cin.ignore(1);
	    cin>>deptName;
	    cout << "Enter assigned work: ";
	    fflush(stdin);
	    cin>>assignedWork;
	    cout << "Enter time in hours to complete work: ";
	    cin  >> time2complete;
	}
};

/*final class (Derived Class)- employee*/
class employee:private basicInfo, private deptInfo
{
    public:
        void getEmployeeInfo(void){
            cout << "Enter employee's basic info: " << endl;
            //call getBasicInfo() of class basicInfo
            getBasicInfo();     //calling of public member function
            cout << "Enter employee's department info: " << endl;
            //call getDeptInfo() of class deptInfo
            getDeptInfo();      //calling of public member function
        }
        void printEmployeeInfo(void)
        {
            cout << "Employee's Information is: "     << endl;
            cout << "Basic Information...:"       << endl;
            cout << "Name: "      << name   << endl;      //accessing protected data
            cout << "Employee ID: " << empId  << endl;        //accessing protected data
            cout << "Gender: "        << gender << endl << endl;//accessing protected data
             
            cout << "Department Information...:"  << endl;
            cout << "Department Name: "           << deptName   << endl; //accessing protected data
            cout << "Assigned Work: "             << assignedWork << endl; //accessing protected data
            cout << "Time to complete work: "     << time2complete<< endl; //accessing protected data
        }
};
 
int main()
{

     //create object of class employee
    clrscr();
    employee emp;
     
    emp.getEmployeeInfo();
    emp.printEmployeeInfo();
    getch();
    return 0;
}