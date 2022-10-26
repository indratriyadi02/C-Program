#include <iostream>
using namespace std;

int main(){ 
	int bil,n;
	long int hasil;
	
	cout<<"===MENCARI NILAI FAKTORIAL===";
	cout<<"\n=== DARI BILANGAN DESIMAL===";
	cout<<"\n=============================";
	cout<<"\n\n masukkan angka\t=";
	cin>>n;
	
	hasil=1;
	for(bil=n; bil>=1; bil--){
	 hasil=hasil*bil;
	 }
	 cout<<"hasil faktorial\t="<<hasil<<"\n";
	
	 
	 return 0;

}
