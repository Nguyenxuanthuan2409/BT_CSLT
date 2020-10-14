// chuong trinh tim so nguyen to
#include <iostream>
using namespace std;
bool TimNguyenTo ( int n)
{
	if ( n < 2 )
		return false ;
	else
		if ( n == 2)
			return true;
		else
		{
			double x = sqrt ( n * 1.0 );
			for ( int i = 2; i <= x ; i ++)
			{
				if ( n % i == 0)
					return false;
			}
			return true;
		}
}
int main ()
{
	int n;
	cout <<" Nhap vao mot so nguyen: ";
	cin >> n;
	if ( TimNguyenTo ( n ) == true )
		cout <<" La so nguyen to\n";
	else
		cout <<" Khong la so nguyen to\n";
	system ("pause");
	return 0;
}