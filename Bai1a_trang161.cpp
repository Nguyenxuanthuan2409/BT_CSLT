// chuong trinh tinh trung binh cua ba so thuc
#include <iostream>
using namespace std;
double TinhTrungBinh ( double a, double b, double c)
{
	return ( a + b + c ) / 3;
}
int main ()
{
	double a,b,c;
	cout <<" Nhap vao ba so thuc ban muon tinh trung binh: ";
	cin >> a >> b >> c;
	cout <<" Gia tri trung binh cua ba so thuc ban tinh la: " << TinhTrungBinh ( a, b, c) << endl;
	system ( "pause" );
	return 0;
}