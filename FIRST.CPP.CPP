#include<fstream.h>
int main()
{
	     ofstream fout;
	     fout.open("OUT.txt");
	     char str[300]="The desire to learn should be                   
           stronger than the desire to live";
	     fout<<str;
	     fout.close();
	     return 0;
     }