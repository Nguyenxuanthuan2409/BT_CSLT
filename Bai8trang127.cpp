// ct yeu cau nhap vao mot so nguyen va in ra cac thua so nguye to
#include <iostream>
using namespace std;
int main ()
{
	int n;
	double x = 0;
	int i = 2;
	cout <<" Nhap vao mot so nguyen: ";
	cin >> n;
	cout <<" Cac thua so nguyen to cua " << n <<" la: ";
	x = sqrt ( n* 1.0 );
	while ( i <= x)
	{
		if (n % i ==0)
			cout << i <<" " ;
		i++;
	}
	system ("pause");
	return 0;
}