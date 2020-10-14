// ct tinh va in ra tong cac so tu 1 den n
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int i = 1;
	int tong = 0;
	cout << " Nhap vao mot so nguyen : ";
	cin >> n;
	while ( i <= n)
	{
		tong += i;
		i++;
	}
	cout <<" Tong cac so nguyen tu 1 den " << n << " la: " << tong << endl;
	system ("pause");
	return 0;
}