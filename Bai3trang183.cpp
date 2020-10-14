// Tim gia tri lon nhat trong mang
#include <iostream>
using namespace std;
const int maxsize = 100;
double a[maxsize];
int main ()
{
	int n;
	int max;
	cout <<" Ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap cac gia tri: ";
	for ( int i = 0; i <= n - 1 ; i ++)
	{
		cin >> a [i];
	}
	for ( int i =0; i <=n -1; i++)
	{
		max = a[0];
		if ( a[i] > max)
			max = a[i];
	}
	cout <<" Gia tri lon nhat la: " << max << endl;
	system ("pause");
	return 0;
}