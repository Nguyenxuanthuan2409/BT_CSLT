// ct tinh khoang cachs toa do hai diem
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	int x1,x2;
	int y1,y2;
	double d;

	cout << "Nhap vao diem thu nhat: ";
	cin >> x1 >> y1;
	cout << "Nhap vao diem thu hai: ";
	cin >> x2 >> y2;

	d = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));
	
	cout << "Khoang cach giua hai diem la: "<<fixed<< setprecision(2)<< d << endl;

	getchar ();
	getchar ();

	return 0;
}