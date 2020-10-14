// Nguyen Xuan Thuan
// #24-09-1999
#include<iostream>
using namespace std;
bool KT_SNT(int n)
{
	
	if (n < 2)
		return false;

	else
		{
			double x = sqrt(n * 1.0);
			for (int i = 2; i <= x; i++)
			{
				if (n % i == 0)
					return false;
			}
			return true;
		}
}
int Fibonacci ( int n )
{
	if ( n == 0 || n == 1 )
		return n;
	else
		return Fibonacci ( n - 1 ) + Fibonacci ( n - 2 );
}
int main ()
{
	int n;
	cout <<" Nhap vao mot so nguyen: ";
	cin >> n;
	cout <<" cac so nguyen to la: ";
	for ( int i = 0; i <= n;i++)
	{
		if ( KT_SNT ( i ) == true )
			cout << i <<" ";
	}
	cout << endl;
	cout <<" Chuoi Fibonacci den thu hang " << n <<" la: ";
	for ( int i = 0 ;i < n ; i++)
	{
		cout << Fibonacci ( i ) << " " ;
	}
	cout << endl;
	system ("pause");
	return 0;
}