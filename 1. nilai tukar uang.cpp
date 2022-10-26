#include <iostream>
using namespace std;
int main()
{
    int m,n,r;
    cout<<"# Bunga Tunggal #\n\n";
    cout<<"Input modal awal tabungan/pinjaman = ";
    cin>>m;
    cout<<"Input bunga/thn (%) = ";
    cin>>r;
    cout<<"Input lama tabungan/pinjaman (thn) = ";
    cin>>n;
    cout<<"\nTotal bunga dalam "<<n<<" tahun adalah Rp."<<n*r*m/100<<endl;
    cout<<"Jumlah tabungan/pinjaman anda dalam "<<n<<" tahun adalah Rp."<<m+n*r*m/100<<endl;
    return 0;
}
