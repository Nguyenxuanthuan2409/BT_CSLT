// so lan xuat hien cua phan tu x trong mang 
#include <iostream>
using namespace std;
const int maxsize=100;
int Tim ( int a[], int n, int x )
{
	int dem = 0;
	for ( int i =0; i <= n-1; i++)
	{
		if ( a[i] == x )
			dem +=1;
	}
	return dem;
}
int main ()
{
	int a[maxsize];
	int n, x;
	cout <<" Ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap vao gia tri mang: ";
	for ( int i =0; i <= n-1; i++)
		cin >> a[i];
	cout <<" Ban can tim so lan xuat hien cua con so nao trong mang: ";
	cin >> x;
	cout <<" So lan xuat hien la: " << Tim ( a, n, x ) << endl;
	system ("pause");
	return 0;
}