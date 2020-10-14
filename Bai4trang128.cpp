// chuong trinh yeu cau doc vao n so nguyen va in ra tong cac so da nhap
#include <iostream>
using namespace std;
int main ()
{
	int n;
	int so;
	int tong = 0;
	cout <<" Ban can bao nhieu so: ";
	cin >> so;
	for ( int i = 1; i <= so ; i++)
	{
		cout <<" So thu " << i << " : ";
		cin >> n;
		tong += n;
	}
	cout <<"Tong "<< so << " so da nhap la: " << tong << endl;
	system ( "pause");
	return 0;
}