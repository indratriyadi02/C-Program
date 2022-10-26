#include<iostream>
using namespace std;

int main ()
{
	int angka[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	
	cout<< "\tArray 2 Dimensi\n" << endl;
	for (int i=0; i<4; i++) {
		cout<< "Nilai pada baris ke-" <<i<<endl;
		for (int j=0; j<3; j++) {
			cout << "Array[" <<i<< "] [" <<j<<"] : "<< angka [i][j] << endl;
		}
		cout<<endl;
	}
	return 0;
}
