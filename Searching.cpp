#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
    int z[]= {12,14,15,12,5};
    int nilai,index[5],j;
    j=0;
    for (int i=0;i<5;i++)
    {
        cout<<z[i]<<",";
    }
    cout<<endl;
    cout<<"masukkan nilai yang dicari : ";cin>>nilai;
    for (int i=0;i<=25;i++)
    {
        if (z[i]==nilai)
        {
            index[j]=i;
            j++;
        }
    }
    
    if (j>0)
    {
        cout<<"Nilai yang dicari = "<<nilai<<" ada sejumlah = "<<j<< " buah"<<endl;
        cout<<"Nilai tersebut ada dalam indeks ke (indeks mulai dari 0) = "<<endl;
        for (int i=0;i<j;i++)
        {
            cout<<"indeks ke "<<index[i]<<endl;
        }
        cout<<endl;
    }
    else
    {cout<<"Nilai tidak ditemukan dalam array"<<endl;}
    getch();    
}
    
