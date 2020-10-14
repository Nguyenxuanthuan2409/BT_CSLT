// viet ham dem so lan xuat hien cac phan tu trong mang
#include <iostream>
using namespace std;
const int maxsize = 100;
bool Tim ( int a[], int n, int x )
{
	for ( int i =0; i <= n-1;i++)
	{
		if ( a[i] == x )
			return true;
	}
	return false;
}
void DemLanXuatHien ( int a[], int n )
{
	int dem =0;int x;
	for ( int i =0; i <=n-1; i++)
	{
		if ( Tim ( a, n , x ));
		continue;
		for ( int j = i+1; j <=n; j++)
		{
			if ( a[i] == a[j] )
				dem +=1;
		}
		cout << a[i] <<" lap lai" << dem <<" lan\n" ;

	}
}
int main ()
{
	int a[ maxsize];
	int n;
	cout <<" ban can bao nhieu phan tu: ";
	cin >> n;
	cout <<" Nhap gia tri phan tu: ";
	for ( int i =0; i <=n-1; i++)
		cin >> a[i];
	DemLanXuatHien( a, n );
	system ("pause");
	return 0;

}