// chuong trinh nhap vao va sap xep ba so theo thu tu tang dan
#include <iostream>
using namespace std;
int main ()
{
	double a,b,c;
	cout <<"Moi ban nhap vao ba so can xep: ";
	cin >> a >> b >> c;

	if ( a < b)
		if ( b < c)
			cout << a <<"\t"<< b <<"\t"<< c <<endl;
		else
			if ( a < c)
				cout << a <<"\t"<< c <<"\t"<< b <<endl;
			else
				cout << c <<"\t"<< a <<"\t"<< b <<endl;
	else
		if ( a < c)
			cout << b <<"\t"<< a <<"\t"<< c <<endl;
		else
			if ( b < c)
				cout << b <<"\t"<< c <<"\t"<< a <<endl;
			else
				cout << c <<"\t"<< b <<"\t"<< a <<endl;
	system ("pause");
	return 0;
	
	

}
