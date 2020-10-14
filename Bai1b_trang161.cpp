// chuong trinh nhan vao ba so thuc va tra ve gia tri nho nhat
#include <iostream>
#include <iomanip>
using namespace std;
double GTNN2so ( double a, double b )
{
	if ( a < b)
		return a;
	return b;
}
double  GTNN3so ( double a, double b, double c )
{
	double min1;
	min1 = GTNN2so ( a,b );
	if ( min1 < c)
		return min1;
	return c;
}
int main ()
{
	double a,b,c;
	cout <<"Nhap vao 3 so ban muon tim GTNN cua no: ";
	cin >> a >> b >> c;
	cout <<" Gia tri nho nhat la: " << fixed << setprecision( 0) << GTNN3so( a, b, c ) << endl;
	system ("pause");
	return 0;
}