// viet nhap, khai bao mang
#include <iostream>
using namespace std;
const int maxsize = 100;
double values[ maxsize ];
int main ()
{
	int n = sizeof ( values) / sizeof ( values[0]);
	cout <<" Ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap vao gia tri: ";
	for ( int i = 0; i <=n-1; i++ )
		cin >> values [i];
	cout <<" Cac phan tu luu trong mang la: ";
	for ( int i = 0; i <= n-1; i++)
		cout << values[i] << " , " ;
	cout << endl;
	system ("pause");
	return 0;
}