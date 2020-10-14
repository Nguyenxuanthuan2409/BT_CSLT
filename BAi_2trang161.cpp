// tinh canh huyen tam giac
#include <iostream>
using namespace std;

double TinhCanhHuyen ( double canh1,double canh2)
{
	double CanhHuyen =sqrt( canh1 * canh1 + canh2 * canh2 );
	return CanhHuyen;
}
int main ()
{
	double a,b;
	cout <<" Nhap vao 2 canh goc vuong cua tam giac: ";
	cin >> a >> b ;
	cout << " Canh huyen cua tam giac la: "<< TinhCanhHuyen (a,b) << endl;
	return 0;
}