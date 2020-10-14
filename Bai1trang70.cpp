// chuong trinh tinh canh hinh vuong
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main ()
{
	double canh;
	double dientich;
	cout <<" Nhap vao chieu dai hinh vuong: ";
	cin >> canh;
	dientich = canh * canh;
	cout <<" Dien tich hinh vuong la: " << fixed << setprecision (0) << dientich << endl;
	system ("pause");
	return 0;
	
}