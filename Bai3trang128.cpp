// chuong trinh yeu cau nhap vao mot so nguyen,tinh vaf in ra tong cac so chan va le
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int n;
	int tongchan = 0;
	int tongle = 0;
	do {
	cout <<" Nhap vao mot so nguyen : ";
	cin >> n;
	if ( n <= 0)
		cout <<" Nhap sai. Nhap lai\n";
	_getch ();
	system ("cls");
	}while ( n <= 0);
	for (int i =1;i <= n; i++)
	{
		if (i % 2 == 0)
			tongchan = tongchan + i;
		else
			tongle = tongle + i;
	}
	cout <<" Tong cac so chan tu 1 den " << n << " la: " << tongchan << endl;
	cout <<" Tong cac so le 1 den " << n << " la: " << tongle << endl;
	system ("pause");
	return 0;
}