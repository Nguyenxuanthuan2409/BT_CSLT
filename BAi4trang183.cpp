// tinh tong va trung binh ca phan tu trong mang
#include <iostream>
using namespace std;
const int maxsize = 100;
double a[ maxsize];
int main ()
{
	int n;
	int tong = 0;
	double trungbinh = 0;
	cout <<" Ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap vao gia tri phan tu: ";
	for ( int i = 0; i <= n - 1; i++)
		cin >> a[i];
	for ( int i = 0; i <= n - 1; i ++)
	{
		tong += a[i];
	}
	trungbinh = tong * 1.0 / n;
	cout <<" Tong cac so trong mang la: " << tong << endl;
	cout <<" Trung binh cac so la: " << trungbinh << endl;
	system ("pause" );
	return 0;
}