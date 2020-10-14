// viet ham xoa phan tu trung nhau
#include <iostream>
using namespace std;
const int maxsize =100;
void Xoa1 ( int a[], int & n, int vt )
{
	if ( vt == n -1 )
		n--;
	else
	{
		for ( int i = vt; i <= n -1; i++)
		{
			a[i] = a[ i+1];
		}
		n--;
	}
}
void XoaTrung ( int a[], int & n)
{
	for ( int i =0; i < n -1 ; i++)
	{
		for ( int j = i+1; j < n; j++)
		{
			if ( a[i] == a[j])
			{Xoa1 ( a, n, j );
			j--;}
		}
	}
}
int main ()
{
	int a[maxsize];
	int n;
	cout <<" Ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap gia tri mang: ";
	for ( int i =0; i <= n-1; i++)
		cin >> a[i];
	XoaTrung ( a, n );
	cout <<" Mang sau khi xoa cac phan tu trung nhau la: ";
	for ( int i =0; i <= n -1; i++)
		cout << a[i] <<" ";
	cout << endl;
	system ("pause");
	return 0;
}