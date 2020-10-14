// chuong trinh nhan vao so va in ra ten cua thang
#include <iostream>
using namespace std;
void InTenThang ( int thang )
{
	switch ( thang )
	{
	case 1 : cout << " Thang 1\n";
		break;
	case 2 : cout << " Thang 2\n";
		break;
	case 3 : cout << " Thang 3\n";
		break;
	case 4 : cout << " Thang 4\n";
		break;
	case 5 : cout << " Thang 5\n";
		break;
	case 6 : cout << " Thang 6\n";
		break;
	case 7 : cout << " Thang 7\n";
		break;
	case 8 : cout << " Thang 8\n";
		break;
	case 9 : cout << " Thang 9\n";
		break;
	case 10: cout << " Thang 10\n";
		break;
	case 11: cout << " Thang 11\n";
		break;
	case 12: cout << " Thang 12\n";
		break;
	default : cout <<" Thang khong hop le\n";
	}
}
void main ()
{
	int thang;
	cout <<" Nhap vao chu so cua mot thang: ";
	cin >> thang;
	InTenThang ( thang );
	system ("pause");
}