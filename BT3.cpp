// xep so theo thu tu tang dan
#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;

	cout <<"Nhap vao ba so can xep: ";
	cin >> a >> b >> c;
	if ( a < b)
		if ( b < c)
			cout << a <<"\t"<< b <<"\t"<< c <<endl;
		else 
			if ( a < c)
				cout << a <<"\t"<< c <<"\t"<< b <<endl;
			else
				cout << c <<"\t"<< a <<"\t"<< b << endl;
	else
		if (a < c)
			cout << b <<"\t"<< a <<"\t"<< c << endl;
		else
			 if( b < c)
			cout << b <<"\t" << c <<"\t"<< a << endl;
			 else
				 cout << c <<"\t"<< a <<"\t"<< b << endl;
	getchar ();
	getchar ();

	return 0;
}