#include<iostream>
#include<conio.h>
using namespace std;

int rekursif(int x){
	int hasil;
	if (x==0||x==1)
		return (1);
	else {
		hasil = x*rekursif(x-1);
		return hasil;
	}
	
}
int main (){
	int x,y, hasil;
	cout <<"\t\t Faktorial Rekursif \t\t \n\n";
	cout<<"Masukkan sebuah bilangan bulat ";
	cin>>x;
	cout<<x<<"!=";
	for (int y=x;y>=1;y--){
		cout<<"*"<<y;
	}
	cout<<"="<<x<<"*"<<rekursif(x);
	getch();
	return 0;
}
