// chuong trinh kiem tra nam nhuan
#include <iostream>
using namespace std;
bool KTNamNhuan ( int nam )
{
	if ( nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0 )
		return true;
	return false;
}

int main ()
{
	int nam;
	cout <<" Nhap vao mot nam ban muon kiem tra: ";
	cin >> nam;
	if ( KTNamNhuan ( nam ) == true )
		cout <<" La nam nhuan \n ";
	else
		cout <<" Khong la nam nhuan\n" ;
	system ( "pause");
	return 0;
}