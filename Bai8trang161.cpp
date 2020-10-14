// chuong trinh kiem tra boi so
#include <iostream>
using namespace std;
bool KiemTraBoiSo ( int a, int b )
{
	if ( a % b == 0)
		return true;
	return false;
}
int main ()
{
	int a,b;
	do {
		cout <<" Nhap vao hai so nguyen: ";
		cin >> a >> b;
		if ( a < b )
			cout <<"Nhap sai. Nhap lai\n";
		} while ( a < b );
	if ( KiemTraBoiSo ( a, b) == true )
		cout <<" So thu nhat la boi cua so thu hai\n";
	else
		cout <<" So thu nhat khong la boi cua so thu hai\n";
	system ("pause");
	return 0;
}