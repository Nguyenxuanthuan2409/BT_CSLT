// xoa phan tu
#include <iostream>
using namespace std;
const int maxsize = 100;

int main ()
{
	double a [ maxsize];
	int n;
	int vt;
	cout <<" Ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap gia tri cac phan tu: ";
	for ( int i = 0; i <= n - 1; i ++)
		cin >> a[i];
	cout <<" ban muon xoa phan tu tai vi tri : ";
	cin >> vt;
	if ( vt == n - 1 )
			n--;
	else
		{
			for (int i = vt; i < n - 1; i++)
				a[i] = a[ i +1];
			n--;
		}
	cout <<" Mang sau khi xoa la: ";
	for ( int i = 0; i <= n - 1;i++)
		cout << a [i] << " " ;
	cout << endl;
	system ("pause");
	return 0;
}