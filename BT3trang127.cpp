// ct timh so dao nguoc
#include <iostream>
using namespace std;
int main ()
{
	int tam,n,chuso;
	int sdn = 0;
	cout <<" Nhap vao mot so: ";
	cin >> n;
	tam = n;
	while (tam >0)
	{
		chuso = tam % 10;
		sdn = sdn * 10 + chuso;
		tam = tam / 10;
	}
	cout <<" So dao nguoc la: "<< sdn << endl;
	getchar ();
	getchar ();


}