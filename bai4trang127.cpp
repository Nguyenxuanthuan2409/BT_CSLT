// ct nhap vao mot so va tinh tong cac so le
#include <iostream>
using namespace std;
int main ()
{
	int tam;
	int n;
	int i = 0;
	int tong = 0;
	do {cout << " Nhap vao mot so: ";
		cin >> n;
		if ( n < 0)
			cout <<" Nhap sai . Nhap lai\n";
	}while ( n < 0 );
	tam = n;
	while ( tam > 0)
	{
	
	int cs = tam %10;
	if ( cs % 2==1)
		tong += cs;
	tam = tam /10;}
	
	cout << " Tong cac chu so le cua " << n <<" la: " << tong << endl;
	system ("pause");
	return 0;
}