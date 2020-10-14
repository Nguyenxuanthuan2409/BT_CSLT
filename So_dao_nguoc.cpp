// in ra so ddao nguoc
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	int n;
	int Tong;
	int sdn;

	cout << "Nhap vao so dao nguoc co 3 chu so: ";
	cin >> n;

	int tram = n / 100;
	int chuc = ( n % 100)/10;
	int donvi = n % 10;

	Tong = tram + chuc + donvi;
	sdn = donvi * 100 + chuc * 10 + tram * 1;

	cout << "Tong cua ba so la: "<< Tong << endl;
	cout << "So dao nguoc: "<<sdn<< endl;

	getchar ();
	getchar ();

	return 0;
}