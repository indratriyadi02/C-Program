#include<iostream>
 
using namespace std;

int konversi(long &u, long p)
{ cout<<"\t Program Menghitung Pecahan Uang\n";
    int pecahan;

    pecahan = u / p;
    u = u % p;
    return(pecahan);
}

void output(long u)
{
	cout<<"\t Setara Dengan \n";
    cout<<"Uang Rp. 50000   : "<<konversi(u, 50000)<<" buah lembar\n";
    cout<<"Uang Rp. 20000   : "<<konversi(u, 20000)<<" buah lembar\n";
    cout<<"Uang Rp. 2000    : "<<konversi(u, 2000)<<" buah lembar\n";
   
}

int main()
{
    long uang;

    cout<<"Masukkan Jumlah Uang kelipatan Rp.2000 : Rp. "; 
    cin>>uang;
    output(uang);

    return 0;
}
