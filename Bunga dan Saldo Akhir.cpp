 #include <iostream>
using namespace std;
int main ()
{
	int bunga,i,jumlah;
	jumlah = 5000000;
	
	cout << "\tProgram Saldo Akhir Rekening\n";
	cout << "\t----------------------------\n\n";
	cout << " Tabungan Awal Sebesar Rp. 5000000\n";
	cout << " Bunga Per Tahun Sebesar 7%\n";
	cout << "==============================\n\n";
	
	for (i = 1 ; i<=8 ; i++){
		cout << " Tabungan Tahun Ke - " << i;
		bunga = jumlah * 0.07;
		cout << " Bunga : Rp " << bunga;
		jumlah = jumlah + bunga;
		cout << " \tSaldo : Rp " << jumlah << endl;
	}
	cout << "\n\tSaldo Akhir Selama 8 Tahun Adalah " << jumlah << endl;	
	
}
