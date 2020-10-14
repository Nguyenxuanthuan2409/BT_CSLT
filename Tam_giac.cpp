// chu vi va dien tich tam giac
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	int a,b,c;
	double S,p;

	cout << "Nhap vao canh thu nhat tam giac: ";
	cin >> a;
	cout << "Nhap vao canh thu hai tam giac: ";
	cin >> b;
	cout << "Nhap vao canh thu ba tam giac: ";
	cin >> c;

	p = ( a +b + c ) / 2 ;
	S = sqrt(p *(p-a) * (p-b) * (p-c));
	cout << "Dien tich tam giac la: " <<fixed<<setprecision(0)<< S <<endl;
	getchar ();
	getchar ();

	return 0;

}