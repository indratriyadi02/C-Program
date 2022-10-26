#include<iostream>
#include<string.h>
#include<ctype.h>


using namespace std;
int main()
{
	char a1[10] = "INDRA";
	char a2[10]	= "UNNES";
	char a3[10] = "UNESA";
	
	cout<< " Hasil Perbandingan " << a1 <<" dan " << a2 <<" -> ";
	cout<< strcmp(a1,a2) << endl;
	cout<< " Hasil Perbandingan " << a1 <<" dan " << a3 <<" -> ";
	cout<< strcmp(a1,a3) << endl;
	cout<< " Hasil Perbandingan " << a2 <<" dan " << a3 <<" -> ";
	cout<< strcmp(a2,a3) << endl;

}
