#include <iostream>
using namespace std;

int main ()
{
	int a;
	for (a=1; a<=100; a+=2)
	{
		if (a%7!=0)
		cout << a <<" ";
	}
	return 0;
}
