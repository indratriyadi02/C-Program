#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int fibo (int n){
	int hasil;
	if (n==0)
	return (0);
	else if (n==1)
	return (1);
	else {
		hasil =fibo(n-2)+fibo(n-1);
		return hasil;}
	}
	int main (){
		int n,j;
		char pilihan;
		cout<<"Fibonacci \n\n";
		cout<<"Masukkan Sebuah Angka = ";
		cin>>n;
		cout<<"Fibonacci("<<n<<")=";
		for (j=0;j<=n-1;j++){
			cout<<fibo(j)<<" ";
		}
	cout<<"= "<<fibo(n)<<endl;
	getch();
	return 0;
	}
