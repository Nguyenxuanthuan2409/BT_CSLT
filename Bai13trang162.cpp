// viet ham tim uoc chung lon nhat
#include<iostream>
#include <conio.h>
using namespace std;
int UCLN ( int m, int n )
{
	while ( n > 0 )
	{
		int sodu = m % n;
		m = n;
		n = sodu;
	} 
	return m;
}
int main ()
{
	int m, n;
	do { 
		cout <<" Nhap vao hai so m va n: ";
		cin >> m >> n;
		if ( m <= n || m <= 0 || n <= 0 )
			cout <<" Nhap sai. Nhap lai\n";
		_getch ( );
		system ("cls");
	} while ( m <= n || m <= 0 || n <= 0 );
	cout <<" Uoc chung lon nhat la: "<< UCLN ( m, n ) << endl;
	system("pause");
	return 0;
}