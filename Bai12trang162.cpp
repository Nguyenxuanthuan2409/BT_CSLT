// viet ham kiem tra so hoan thien
// cac so hoan thien de thu la : 6, 28, 496,...
#include <iostream>
using namespace std;
bool KiemTraSoHoanThien ( int n )
{
	int tonguoc = 0;
	int tam = n;
	for ( int i = 1; i < tam ; i ++)
	{
		if ( tam % i == 0 )
			tonguoc += i;
	}
	if ( tonguoc == n )
		return true;
	return false;
}
int main ()
{
	int n;
	cout <<" Nhap vao mot so nguyen: ";
	cin >> n;
	if ( KiemTraSoHoanThien ( n ) == true )
		cout << n << " la so hoan thien\n";
	else
		cout << n << " Khong la so hoan thien\n";
	system ("pause");
	return 0;
}
