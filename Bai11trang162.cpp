// chuong trinh viet ham kiem tra LaSoPaLindrome
#include <iostream>
using namespace std;
bool LaSoPaLindrome ( int n )
{
	int chuso;
	int tam = n;
	int sdn = 0;
	for ( int i = 1; tam > 0; i ++)
	{
		chuso = tam % 10;
		sdn = sdn * 10 + chuso;
		tam /= 10;
	}
	if ( sdn == n )
		return true;
	else
		return false;
}
int main ()
{
	int n;
	cout <<" Nhap vao mot so nguyen n : ";
	cin >> n;
	if ( LaSoPaLindrome( n ) == true )
		cout <<" So ban nhap la LaSoPaLindrome\n";
	else
		cout <<" So ban nhap khong la LaSoPaLindrome\n";
	system ("pause");
	return 0;
}