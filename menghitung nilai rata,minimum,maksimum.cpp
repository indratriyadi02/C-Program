#include<iostream>

using namespace std;
int main()
{
	int A[20]= { 3,2,1,0,0,6,8,9,2,7,8,10,11,7,7,11,5,5,7,7 };
	int minimal, maksimal, jumlah=0;
	float rata;
	for (int i = 0; i<20; i++) {
		cout <<"Data baris ke-" << i <<"="<< A[i] << endl;
		jumlah=jumlah + A[i];
	}
	rata = jumlah/20;
	cout<< "Jumlah = " <<jumlah<<endl;
	cout<< "Rata = " <<rata<<endl;
	minimal = A[0];
	maksimal = A[0];
	for (int j = 0; j < 20; j++){
		if (A[j] > maksimal) {
			maksimal = A[j];
		}
		if (A[j] < minimal) {
			minimal = A[j];
		}
	}
	
	cout<<"Nilai Tertinggi adalah =" << maksimal << endl;
	cout<<"Nilai Terendah adalah =" << minimal << endl;
	
	return 0;
}
