// vi tri xuat hien cua phan tu nho nhat trong mang
#include <iostream>
using namespace std;
int XuatHien ( int a [], int n )
{
	int min= a[0];int i;
	for ( int i =1; i <= n-1; i++)
	{
		if ( min > a[i])
			min = a[i];
	}
	return min;
	
}
void Nhap ( int a [], int n )
{
	for ( int i =0; i <= n-1; i++)
		cin >> a[i];
}

int main ()
{
	int n,vt;
	const int maxsize = 100;
	int a[ maxsize];
	cout <<"Ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap vao gia tri phan tu cua mang: ";
	Nhap ( a, n );
	cout <<" Phan tu nho nhat xuat hien dau tien trong mang la: " << XuatHien ( a,n ) << endl;
	system ("pause");
	return 0;

}