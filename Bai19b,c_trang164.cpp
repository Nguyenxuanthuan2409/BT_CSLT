// Ct sap xep hai so nguyen theo thu tu tang dan
#include <iostream>
#include <conio.h>
using namespace std;
void HoanDoi ( int & a, int & b )
{
	int tam = a;
	a = b;
	b = tam;
}
void SapXep2 ( int&a, int& b )
{
	if ( a > b )
		HoanDoi ( a, b );
}
void SapXep3 ( int & a, int & b, int & c )
{
	if ( a > b )
		HoanDoi ( a, b );
	if ( c < b )
	{
		if ( c > a )
			HoanDoi ( b , c );
		else
	{
		HoanDoi ( a , c );
		HoanDoi ( b, c );
	}
	}
}
int main ()
{
	int a,b,c;
	cout <<" Nhap vao 2 so can sap xep tang dan: ";
	cin >> a >> b ;
	SapXep2 ( a, b );
	cout <<" Hai so theo thu tu tang dan la: " << a << " " << b << endl;
	cout <<"Nhap vao ba so can sap xep: ";
	cin >> a >> b >> c ;
	SapXep3 ( a, b , c );
	cout <<" Ba so sau khi sap xep la: " << a << " " << b << " " << c << endl;
	system ("pause");
	return 0;
}