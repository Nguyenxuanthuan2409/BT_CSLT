// chuong trinh 
#include <iostream>
using namespace std;
int TongNhan ( int n)
{
	int tong = 0;
	for ( int i = 1 ; i <= n ; i++)
	{
		tong = tong + i;
	}

}
int main ()
{
	int n;
	do {cout <<" Nhap vao mot so nguyen ( n >=0): ";
		cin >> n;
		if ( n < 0)
			cout <<" Nhap sai. Nhap lai\n";
		system ("pause");
		system ( "cls");
	} while ( n < 0);
	cout << " Tong cac so tu 1 den " << n << " la: " << TongNhan( n ) << endl;
	system ( "pause" );
	return 0;
}