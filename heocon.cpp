#include <iostream>
using namespace std;
int tong (int n)
{
	int tong = 0;
	for(int i = 0; i <= n; i++)
		tong += i;
	return tong;
}
int main()
{
	int n;
	cout <<"Nhap vao so nguyen n: ";
	cin >> n;
	cout <<"Tong tu 1 den " << n <<" la: " << tong ( n )  << endl;
	system ("pause");
	return 0;
}
