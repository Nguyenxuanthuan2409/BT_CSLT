// viet ham tim so dao nguoc bao gom so am
#include <iostream>
using namespace std;
int DaoNguoc ( int n)
{
	if ( n < 0)
		n = -n;
	int tam = n;
	int sdn = 0;
	while ( tam > 0)
	{
		int chuso = tam % 10;
		sdn = sdn * 10 + chuso;
		tam = tam / 10;
	}
	if ( n == -n)
		return -sdn;
	return sdn;
}
int main ()
{
	int n;
	cout <<" Nhap vao mot so nguyen n ma ban muon dao nguoc: ";
	cin >> n;
	cout <<" So dao nguoc cua ban can la: " << DaoNguoc ( n) << endl;
	system ("pause");
	return 0;
}
