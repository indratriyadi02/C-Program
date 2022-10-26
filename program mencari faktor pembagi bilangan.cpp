//program Mencari Pembagian Bilangan Bulat
#include<iostream>
using namespace std;
main ()
{
	int angka,i,bulat;
	
	cout<<"program Mencari Pembagian Bilangan Bulat"<<endl;
	cout<<"Masukkan Bilangan Yang Ingin Dibagi ";
	cin>>angka;
	cout<<"Faktor Pembagi Bilangan "<< angka <<" \n";
	for(i= 1; i<=angka/2; i++)
		if (angka % i ==0)
	cout<< i << "\n";
    return 0;
}
