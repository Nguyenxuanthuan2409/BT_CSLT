// ct nhap vao mot chuoi ky tu,nhung ky tu chu hoa dc chuyen thanh chu thuong
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string chuoi;
	cout <<" Nhap vao mot chuoi ki tu cua ban: ";
	getline (cin , chuoi);
	for ( int i = 0; i < chuoi.length();i++)
	{
		if ( chuoi.at(i) >= ' A ' && chuoi.at(i) <= ' Z ')
			chuoi.at(i) = (char )((int)chuoi.at(i) + 32);
	}
	cout <<" Chuoi da nhap la: " << chuoi << endl;
	system ("pause");
	return 0;

}