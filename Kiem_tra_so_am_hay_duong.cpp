// ct kiem tra so am hay duong
#include <iostream>
using namespace std;

int main ()
{
	double n;

	cout <<" Nhap vao mot so: ";
	cin >> n;

	if (n > 0)
		cout <<" LA so duong";
	else 
		if ( n < 0)
			cout << "La so am";
		else 
			cout << "So 0";
	getchar ();
	getchar ();
	return 0;
}