// ct tinh dien tich hinh tron
#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double bankinh;
	double S;
	const double Pi = 3.141593;

	cout << "Nhap vao ban kinh hinh tron: ";
	cin >> bankinh;

	S = 2 * Pi * bankinh;
	
	cout << "Dien tich hinh tron la: "<< fixed << setprecision(2)<< S << endl;
	getchar ();
	getchar ();
	return 0;
}