// ct hoan doi, sap xep hai hay ba so
#include <iostream>
using namespace std;

void HoanDoi ( int& a, int& b )
{
	int tam = a;
	a = b;
	b = tam;
}
int main ()
{
	int a, b;
	cout <<" Nhap vao hai so ban muon hoan doi: ";
	cin >> a >> b;
	HoanDoi ( a , b );
	cout << " hai so sau khi hoan doi la: ";
	cout << a << " " << b << endl;
	system ("pause");
	return 0;
}