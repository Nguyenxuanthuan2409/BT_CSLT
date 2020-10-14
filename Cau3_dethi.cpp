// Nguyen Xuan Thuan
// 24-09-1999
#include<iostream>
#include <conio.h>
#include <ctime>
using namespace std;
const int maxsize = 100;

void SXGD ( int a[], int n )
	{
		int tam;
		for ( int i = 1; i < n;i++)
		{
			for ( int j = n-1; j >= i; j--)
			{
				if ( a[i] >= a[j-1])
				{
					tam = a[j];
					a[i] = a[j-1];
					a[j-1] = tam;

				}
			}
		}
		
	}

int main ()
{
	int a[maxsize];
	int n;
	double tong = 0;
	double tich = 1;
	cout <<" Nhap so luong phan tu ban can: ";
	cin >> n;
	cout <<" Nhap gia tri phan tu ( chi nhap < 10 ): ";
	for ( int i = 0; i <= n- 1; i++)
	{
		//do { 
			cin >> a[i];
		//	if ( a[i] > 10 )
		//	cout <<" Chi nhap nho hon 10\n";
		//	_getch ();
		//	/*system( "cls");*/
		//}while ( a[i] > 10);
	}
	cout <<" Cac phan tu cua mang la: ";
	for ( int i = 0; i <= n- 1; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for ( int i = 0; i <= n-1 ;i++)
	{
		if ( i % 2 == 0)
			tong += i;
		else
			tich *= i;
	}
	cout <<" Tong cac phan tu co gia tri chan la: " << tong << endl;
	cout <<" Tich cac phan tu co gia tri le la: " << tich << endl;
	cout <<" Gia tri mang sau khi xep la: ";
	SXGD(a,n );
	for ( int i = 0; i <= n-1; i++)
		cout << a[i] <<" ";
	cout << endl;
	system ("pause");
	/*return 0;*/
}
//#include<stdlib.h>
//for ( int i = 0; i <n ; i++)
//	a[i] = sand () % 10;