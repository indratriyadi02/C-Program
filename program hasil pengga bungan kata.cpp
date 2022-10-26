#include<iostream>
#include<string.h>
#include<ctype.h>
#include<stdio.h>

using namespace std;
int main()
{
	char a[20],b[20];
	cout<< " Masukkan Kata Pertama : " ;
	gets(a);
	cout<< " Masukan kata kedua : ";
	gets(b);
	strcat(a , b);
	
	cout<< "Hasil Penggabungan dari kedua kata = " <<a;
}
